#pragma once
#include<QtWidgets/QMainWindow>
#include<QUdpSocket>
#include"ui_DeviceClient.h"

class DeviceClient : public QMainWindow
{
    Q_OBJECT
public:
    DeviceClient(QWidget *parent = nullptr);
    ~DeviceClient();

private:
    Ui::DeviceClientClass ui;
    QUdpSocket* m_pUdpSock;
    QByteArray m_reg;
    //Массив QТэйблВиджетов для занесения данных в таблицы 
    std::array<QTableWidget*, 3> arrTableWidg{0};

    //Константы
    const uint8_t READ_REQ = 31;
    const uint8_t WRITE_REQ = 30;
    const uint8_t REQ_COMPLETED = 40;
    const uint8_t REQ_FAILED = 41;
    const uint8_t REG_ALL = 0;
    const uint8_t REG_GROUP_1 = 1;
    const uint8_t REG_GROUP_2 = 2;
    const uint8_t REG_GROUP_3 = 3;

    const uint16_t PORT_READ = 4444;
    const uint16_t PORT_WRITE = 5555;

private slots:
    void slotRecieveData();
   
private:
    void sendRequest(const uint8_t REQ);
    void dataPrepar(QTableWidget* tWid, const uint8_t group);
    void initTable();
};

