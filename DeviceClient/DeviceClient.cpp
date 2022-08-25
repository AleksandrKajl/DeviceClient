#include"DeviceClient.h"
#include<QMessageBox>

DeviceClient::DeviceClient(QWidget *parent)
    : QMainWindow(parent)
    , m_pUdpSock(new QUdpSocket(this))
{
    ui.setupUi(this);
    setWindowIcon(QIcon(":/DeviceClient/client.png"));
    m_reg.fill(0, 40);

    //Заполняем массив 
    arrTableWidg[0] = ui.tableWidget;
    arrTableWidg[1] = ui.tableWidget_2;
    arrTableWidg[2] = ui.tableWidget_3;

    //Привязываем сокет к адресу LocslHost и порту 4444 для получения датаграмм
    m_pUdpSock->bind(PORT_READ);
    connect(m_pUdpSock, SIGNAL(readyRead()), SLOT(slotRecieveData()));
    connect(ui.pushButton, &QPushButton::clicked, [&]() {sendRequest(WRITE_REQ); });
    connect(ui.pushButton_2, &QPushButton::clicked, [&]() {sendRequest(READ_REQ); });
    initTable();
}

DeviceClient::~DeviceClient()
{}

//Слот для принятия данных от устройства
void DeviceClient::slotRecieveData()
{
    QByteArray data;
    //Извлекаем последнюю полученную датаграмму
    do
    {
        data.resize(m_pUdpSock->pendingDatagramSize());
        m_pUdpSock->readDatagram(data.data(), data.size());
    } while (m_pUdpSock->hasPendingDatagrams());
    if (data.isEmpty())
    {
        QMessageBox::warning(this, "Ошибка данных", "Устройство не в сети");
        return;
    }
        

    //Извлекаем полученные данные
    QDataStream in(&data, QIODevice::ReadOnly);
    uint8_t request{};
    uint8_t groupReg{};
    QByteArray reg;
    in >> request;
    in >> groupReg;

    //Если пришли запрашиваеммые данные
    if (request == REQ_COMPLETED)
    {
        uint8_t offst{};
        uint8_t cnt{};
        switch (groupReg)
        {
        case 0:
            cnt = 40;
            break;
        case 1:
            cnt = 8;
            break;
        case 2:
            offst = 8;
            cnt = 23;
            break;
        case 3:
            offst = 32;
            cnt = 8;
            break;
        default:
            QMessageBox::warning(this, "Ошибка принятых данных", "Для данных указана не существующая группа регистров!");
            return;
        }

        in >> reg;
        m_reg.replace(offst, cnt, reg);
        initTable();
    }
    else if (request == REQ_FAILED)
    {
        QMessageBox::warning(this, "Ошибка выполнения запроса", "Пришел ответ: Запрос не выполнен!");
    }
    else
        QMessageBox::warning(this, "Ошибка выполнения запроса", "Не известный ответ от устройства!");
}

//Метод отправки данных на запись
void DeviceClient::sendRequest(const uint8_t REQ)
{
    QByteArray data;
    QDataStream out(&data, QIODevice::WriteOnly);

    if (REQ == WRITE_REQ)
    {
        if (ui.radioButton->isChecked())
        {
            dataPrepar(ui.tableWidget, REG_GROUP_1);
            out << REQ << REG_GROUP_1 << m_reg.sliced(0, 8);
        }
        else if (ui.radioButton_2->isChecked())
        {
            dataPrepar(ui.tableWidget_2, REG_GROUP_2);
            out << REQ << REG_GROUP_2 << m_reg.sliced(8, 23);

        }
        else if (ui.radioButton_3->isChecked())
        {
            dataPrepar(ui.tableWidget_3, REG_GROUP_3);
            out << REQ << REG_GROUP_3 << m_reg.sliced(32, 8);
        }
        else if (ui.radioButton_4->isChecked())
        {
            uint8_t group{1};
            for (auto& item : arrTableWidg)
            {
                dataPrepar(item , group++);
            }
            out << REQ << REG_ALL << m_reg;
        }
    }
    else if(REQ == READ_REQ)
    {
        if (ui.radioButton->isChecked())
            out << REQ << REG_GROUP_1;

        else if (ui.radioButton_2->isChecked())
            out << REQ << REG_GROUP_2;

        else if (ui.radioButton_3->isChecked())
            out << REQ << REG_GROUP_3;

        else if (ui.radioButton_4->isChecked())
            out << REQ << REG_ALL;
    }
        
    m_pUdpSock->writeDatagram(data, QHostAddress::LocalHost, PORT_WRITE);
}

//Подготовка данных для отправки(Извлечение их из QTableWidget
//и запись по адресу в массив регистров )
void DeviceClient::dataPrepar(QTableWidget* tWid, const uint8_t group)
{
    QString str;
    bool Ok = false;
    uint8_t offst{};
    //Смещение для разных групп от начала массива регистров
    if (group == 2)
        offst = 8;
    else if (group == 3)
        offst = 32;

    for (int i{}; i < tWid->rowCount(); ++i)
    {
        if (tWid->item(i, 0))
        {
            //str = "0x" + tWid->item(i, 0)->text();
            //m_reg[i + offst] = str.toInt(&Ok, 16);
            m_reg[i + offst] = tWid->item(i, 0)->text().toInt(&Ok, 16);
        }
        else
            m_reg[i + offst] = 0;
    }
}

//Инициализация таблицы данными из регистров
void DeviceClient::initTable()
{
    //Массив смещений для разных групп регистров
    int arrOffst[3]{ 0, 8, 32 };
    int j{};
    for (auto& it : arrTableWidg)
    {
        for (int i{}; i < it->rowCount(); ++i)
        {
            QString prefix;
            if ((uint8_t)m_reg[i + arrOffst[j]] < 0x10)
                prefix.append("0");
            QTableWidgetItem* item = new QTableWidgetItem(prefix + QString::number((uint8_t)m_reg[i + arrOffst[j]], 16).toUpper());
            it->setItem(i, 0, item);
        }
        ++j;
    }
}
