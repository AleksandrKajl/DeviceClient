/********************************************************************************
** Form generated from reading UI file 'DeviceClient.ui'
**
** Created by: Qt User Interface Compiler version 6.3.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEVICECLIENT_H
#define UI_DEVICECLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DeviceClientClass
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QTableWidget *tableWidget;
    QTableWidget *tableWidget_2;
    QTableWidget *tableWidget_3;
    QPushButton *pushButton_2;
    QGroupBox *groupBox_2;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *DeviceClientClass)
    {
        if (DeviceClientClass->objectName().isEmpty())
            DeviceClientClass->setObjectName(QString::fromUtf8("DeviceClientClass"));
        DeviceClientClass->resize(911, 455);
        DeviceClientClass->setMinimumSize(QSize(911, 455));
        DeviceClientClass->setMaximumSize(QSize(911, 455));
        centralWidget = new QWidget(DeviceClientClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setMinimumSize(QSize(0, 0));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 0, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 2, 0, 1, 1);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tableWidget = new QTableWidget(groupBox);
        if (tableWidget->columnCount() < 2)
            tableWidget->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        if (tableWidget->rowCount() < 8)
            tableWidget->setRowCount(8);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(5, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(6, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(7, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        __qtablewidgetitem10->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableWidget->setItem(2, 1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        __qtablewidgetitem11->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableWidget->setItem(3, 1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        __qtablewidgetitem12->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableWidget->setItem(4, 1, __qtablewidgetitem12);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        horizontalLayout->addWidget(tableWidget);

        tableWidget_2 = new QTableWidget(groupBox);
        if (tableWidget_2->columnCount() < 2)
            tableWidget_2->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(0, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget_2->setHorizontalHeaderItem(1, __qtablewidgetitem14);
        if (tableWidget_2->rowCount() < 24)
            tableWidget_2->setRowCount(24);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(1, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(2, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(3, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(4, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(5, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(6, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(7, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(8, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(9, __qtablewidgetitem24);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(10, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(11, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(12, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(13, __qtablewidgetitem28);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(14, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(15, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(16, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(17, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(18, __qtablewidgetitem33);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(19, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(20, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(21, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(22, __qtablewidgetitem37);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        tableWidget_2->setVerticalHeaderItem(23, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        __qtablewidgetitem39->setTextAlignment(Qt::AlignCenter);
        tableWidget_2->setItem(0, 0, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        __qtablewidgetitem40->setTextAlignment(Qt::AlignCenter);
        tableWidget_2->setItem(1, 0, __qtablewidgetitem40);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        tableWidget_2->setItem(12, 0, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        __qtablewidgetitem42->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableWidget_2->setItem(12, 1, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        __qtablewidgetitem43->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableWidget_2->setItem(13, 1, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        __qtablewidgetitem44->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableWidget_2->setItem(14, 1, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        __qtablewidgetitem45->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableWidget_2->setItem(15, 1, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        __qtablewidgetitem46->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableWidget_2->setItem(16, 1, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        __qtablewidgetitem47->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableWidget_2->setItem(17, 1, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        __qtablewidgetitem48->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableWidget_2->setItem(18, 1, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        __qtablewidgetitem49->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableWidget_2->setItem(19, 1, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        __qtablewidgetitem50->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableWidget_2->setItem(20, 1, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        __qtablewidgetitem51->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableWidget_2->setItem(21, 1, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        __qtablewidgetitem52->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableWidget_2->setItem(22, 1, __qtablewidgetitem52);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        __qtablewidgetitem53->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableWidget_2->setItem(23, 1, __qtablewidgetitem53);
        tableWidget_2->setObjectName(QString::fromUtf8("tableWidget_2"));

        horizontalLayout->addWidget(tableWidget_2);

        tableWidget_3 = new QTableWidget(groupBox);
        if (tableWidget_3->columnCount() < 2)
            tableWidget_3->setColumnCount(2);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(0, __qtablewidgetitem54);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        tableWidget_3->setHorizontalHeaderItem(1, __qtablewidgetitem55);
        if (tableWidget_3->rowCount() < 8)
            tableWidget_3->setRowCount(8);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(0, __qtablewidgetitem56);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(1, __qtablewidgetitem57);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(2, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(3, __qtablewidgetitem59);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(4, __qtablewidgetitem60);
        QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(5, __qtablewidgetitem61);
        QTableWidgetItem *__qtablewidgetitem62 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(6, __qtablewidgetitem62);
        QTableWidgetItem *__qtablewidgetitem63 = new QTableWidgetItem();
        tableWidget_3->setVerticalHeaderItem(7, __qtablewidgetitem63);
        QTableWidgetItem *__qtablewidgetitem64 = new QTableWidgetItem();
        __qtablewidgetitem64->setTextAlignment(Qt::AlignCenter);
        tableWidget_3->setItem(0, 0, __qtablewidgetitem64);
        QTableWidgetItem *__qtablewidgetitem65 = new QTableWidgetItem();
        __qtablewidgetitem65->setTextAlignment(Qt::AlignCenter);
        tableWidget_3->setItem(2, 0, __qtablewidgetitem65);
        QTableWidgetItem *__qtablewidgetitem66 = new QTableWidgetItem();
        __qtablewidgetitem66->setTextAlignment(Qt::AlignCenter);
        tableWidget_3->setItem(3, 0, __qtablewidgetitem66);
        QTableWidgetItem *__qtablewidgetitem67 = new QTableWidgetItem();
        __qtablewidgetitem67->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableWidget_3->setItem(3, 1, __qtablewidgetitem67);
        QTableWidgetItem *__qtablewidgetitem68 = new QTableWidgetItem();
        __qtablewidgetitem68->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableWidget_3->setItem(4, 1, __qtablewidgetitem68);
        QTableWidgetItem *__qtablewidgetitem69 = new QTableWidgetItem();
        __qtablewidgetitem69->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableWidget_3->setItem(5, 1, __qtablewidgetitem69);
        QTableWidgetItem *__qtablewidgetitem70 = new QTableWidgetItem();
        __qtablewidgetitem70->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableWidget_3->setItem(6, 1, __qtablewidgetitem70);
        QTableWidgetItem *__qtablewidgetitem71 = new QTableWidgetItem();
        __qtablewidgetitem71->setFlags(Qt::ItemIsSelectable|Qt::ItemIsDragEnabled|Qt::ItemIsDropEnabled|Qt::ItemIsUserCheckable|Qt::ItemIsEnabled);
        tableWidget_3->setItem(7, 1, __qtablewidgetitem71);
        tableWidget_3->setObjectName(QString::fromUtf8("tableWidget_3"));
        tableWidget_3->setMinimumSize(QSize(0, 0));

        horizontalLayout->addWidget(tableWidget_3);


        gridLayout_2->addWidget(groupBox, 0, 0, 1, 2);

        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout_2->addWidget(pushButton_2, 2, 1, 1, 1);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        horizontalLayout_2 = new QHBoxLayout(groupBox_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        radioButton_4 = new QRadioButton(groupBox_2);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        horizontalLayout_2->addWidget(radioButton_4);

        radioButton = new QRadioButton(groupBox_2);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setChecked(true);

        horizontalLayout_2->addWidget(radioButton);

        radioButton_2 = new QRadioButton(groupBox_2);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        horizontalLayout_2->addWidget(radioButton_2);

        radioButton_3 = new QRadioButton(groupBox_2);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        horizontalLayout_2->addWidget(radioButton_3);


        gridLayout_2->addWidget(groupBox_2, 1, 0, 1, 2);

        DeviceClientClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(DeviceClientClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 911, 22));
        DeviceClientClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(DeviceClientClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        DeviceClientClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(DeviceClientClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        DeviceClientClass->setStatusBar(statusBar);

        retranslateUi(DeviceClientClass);

        QMetaObject::connectSlotsByName(DeviceClientClass);
    } // setupUi

    void retranslateUi(QMainWindow *DeviceClientClass)
    {
        DeviceClientClass->setWindowTitle(QCoreApplication::translate("DeviceClientClass", "DeviceClient", nullptr));
        pushButton->setText(QCoreApplication::translate("DeviceClientClass", "\320\227\320\260\320\277\320\270\321\201\321\214", nullptr));
        groupBox->setTitle(QCoreApplication::translate("DeviceClientClass", "\320\223\321\200\321\203\320\277\320\277\320\260 1                                                                          \320\223\321\200\321\203\320\277\320\277\320\260 2                                                                        \320\223\321\200\321\203\320\277\320\277\320\260 3                                                  ", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QCoreApplication::translate("DeviceClientClass", "\320\224\320\260\320\275\320\275\321\213\320\265 hex", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QCoreApplication::translate("DeviceClientClass", "\320\232\320\276\320\274\320\274\320\265\320\275\321\202\320\260\321\200\320\270\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem2->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\2230", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem3->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\2231", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem4->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\2232", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem5->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\2233", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem6->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\2234", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget->verticalHeaderItem(5);
        ___qtablewidgetitem7->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\2235", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget->verticalHeaderItem(6);
        ___qtablewidgetitem8->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\2236", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget->verticalHeaderItem(7);
        ___qtablewidgetitem9->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\2237", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget->item(2, 1);
        ___qtablewidgetitem10->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\225\320\227\320\225\320\240\320\222", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget->item(3, 1);
        ___qtablewidgetitem11->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\225\320\227\320\225\320\240\320\222", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget->item(4, 1);
        ___qtablewidgetitem12->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\225\320\227\320\225\320\240\320\222", nullptr));
        tableWidget->setSortingEnabled(__sortingEnabled);

        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_2->horizontalHeaderItem(0);
        ___qtablewidgetitem13->setText(QCoreApplication::translate("DeviceClientClass", "\320\224\320\260\320\275\320\275\321\213\320\265 hex", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget_2->horizontalHeaderItem(1);
        ___qtablewidgetitem14->setText(QCoreApplication::translate("DeviceClientClass", "\320\232\320\276\320\274\320\274\320\265\320\275\321\202\320\260\321\200\320\270\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget_2->verticalHeaderItem(0);
        ___qtablewidgetitem15->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\2238", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget_2->verticalHeaderItem(1);
        ___qtablewidgetitem16->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\2239", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget_2->verticalHeaderItem(2);
        ___qtablewidgetitem17->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\22310", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget_2->verticalHeaderItem(3);
        ___qtablewidgetitem18->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\22311", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget_2->verticalHeaderItem(4);
        ___qtablewidgetitem19->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\22312", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget_2->verticalHeaderItem(5);
        ___qtablewidgetitem20->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\22313", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget_2->verticalHeaderItem(6);
        ___qtablewidgetitem21->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\22314", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget_2->verticalHeaderItem(7);
        ___qtablewidgetitem22->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\22315", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget_2->verticalHeaderItem(8);
        ___qtablewidgetitem23->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\22316", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget_2->verticalHeaderItem(9);
        ___qtablewidgetitem24->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\22317", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget_2->verticalHeaderItem(10);
        ___qtablewidgetitem25->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\22318", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget_2->verticalHeaderItem(11);
        ___qtablewidgetitem26->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\22319", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget_2->verticalHeaderItem(12);
        ___qtablewidgetitem27->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\22320", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget_2->verticalHeaderItem(13);
        ___qtablewidgetitem28->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\22321", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget_2->verticalHeaderItem(14);
        ___qtablewidgetitem29->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\22322", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget_2->verticalHeaderItem(15);
        ___qtablewidgetitem30->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\22323", nullptr));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget_2->verticalHeaderItem(16);
        ___qtablewidgetitem31->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\22324", nullptr));
        QTableWidgetItem *___qtablewidgetitem32 = tableWidget_2->verticalHeaderItem(17);
        ___qtablewidgetitem32->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\22325", nullptr));
        QTableWidgetItem *___qtablewidgetitem33 = tableWidget_2->verticalHeaderItem(18);
        ___qtablewidgetitem33->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\22326", nullptr));
        QTableWidgetItem *___qtablewidgetitem34 = tableWidget_2->verticalHeaderItem(19);
        ___qtablewidgetitem34->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\22327", nullptr));
        QTableWidgetItem *___qtablewidgetitem35 = tableWidget_2->verticalHeaderItem(20);
        ___qtablewidgetitem35->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\22328", nullptr));
        QTableWidgetItem *___qtablewidgetitem36 = tableWidget_2->verticalHeaderItem(21);
        ___qtablewidgetitem36->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\22329", nullptr));
        QTableWidgetItem *___qtablewidgetitem37 = tableWidget_2->verticalHeaderItem(22);
        ___qtablewidgetitem37->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\22330", nullptr));
        QTableWidgetItem *___qtablewidgetitem38 = tableWidget_2->verticalHeaderItem(23);
        ___qtablewidgetitem38->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\22331", nullptr));

        const bool __sortingEnabled1 = tableWidget_2->isSortingEnabled();
        tableWidget_2->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem39 = tableWidget_2->item(12, 1);
        ___qtablewidgetitem39->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\225\320\227\320\225\320\240\320\222", nullptr));
        QTableWidgetItem *___qtablewidgetitem40 = tableWidget_2->item(13, 1);
        ___qtablewidgetitem40->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\225\320\227\320\225\320\240\320\222", nullptr));
        QTableWidgetItem *___qtablewidgetitem41 = tableWidget_2->item(14, 1);
        ___qtablewidgetitem41->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\225\320\227\320\225\320\240\320\222", nullptr));
        QTableWidgetItem *___qtablewidgetitem42 = tableWidget_2->item(15, 1);
        ___qtablewidgetitem42->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\225\320\227\320\225\320\240\320\222", nullptr));
        QTableWidgetItem *___qtablewidgetitem43 = tableWidget_2->item(16, 1);
        ___qtablewidgetitem43->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\225\320\227\320\225\320\240\320\222", nullptr));
        QTableWidgetItem *___qtablewidgetitem44 = tableWidget_2->item(17, 1);
        ___qtablewidgetitem44->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\225\320\227\320\225\320\240\320\222", nullptr));
        QTableWidgetItem *___qtablewidgetitem45 = tableWidget_2->item(18, 1);
        ___qtablewidgetitem45->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\225\320\227\320\225\320\240\320\222", nullptr));
        QTableWidgetItem *___qtablewidgetitem46 = tableWidget_2->item(19, 1);
        ___qtablewidgetitem46->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\225\320\227\320\225\320\240\320\222", nullptr));
        QTableWidgetItem *___qtablewidgetitem47 = tableWidget_2->item(20, 1);
        ___qtablewidgetitem47->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\225\320\227\320\225\320\240\320\222", nullptr));
        QTableWidgetItem *___qtablewidgetitem48 = tableWidget_2->item(21, 1);
        ___qtablewidgetitem48->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\225\320\227\320\225\320\240\320\222", nullptr));
        QTableWidgetItem *___qtablewidgetitem49 = tableWidget_2->item(22, 1);
        ___qtablewidgetitem49->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\225\320\227\320\225\320\240\320\222", nullptr));
        QTableWidgetItem *___qtablewidgetitem50 = tableWidget_2->item(23, 1);
        ___qtablewidgetitem50->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\225\320\227\320\225\320\240\320\222", nullptr));
        tableWidget_2->setSortingEnabled(__sortingEnabled1);

        QTableWidgetItem *___qtablewidgetitem51 = tableWidget_3->horizontalHeaderItem(0);
        ___qtablewidgetitem51->setText(QCoreApplication::translate("DeviceClientClass", "\320\224\320\260\320\275\320\275\321\213\320\265 hex", nullptr));
        QTableWidgetItem *___qtablewidgetitem52 = tableWidget_3->horizontalHeaderItem(1);
        ___qtablewidgetitem52->setText(QCoreApplication::translate("DeviceClientClass", "\320\232\320\276\320\274\320\274\320\265\320\275\321\202\320\260\321\200\320\270\320\270", nullptr));
        QTableWidgetItem *___qtablewidgetitem53 = tableWidget_3->verticalHeaderItem(0);
        ___qtablewidgetitem53->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\22332", nullptr));
        QTableWidgetItem *___qtablewidgetitem54 = tableWidget_3->verticalHeaderItem(1);
        ___qtablewidgetitem54->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\22333", nullptr));
        QTableWidgetItem *___qtablewidgetitem55 = tableWidget_3->verticalHeaderItem(2);
        ___qtablewidgetitem55->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\22334", nullptr));
        QTableWidgetItem *___qtablewidgetitem56 = tableWidget_3->verticalHeaderItem(3);
        ___qtablewidgetitem56->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\22335", nullptr));
        QTableWidgetItem *___qtablewidgetitem57 = tableWidget_3->verticalHeaderItem(4);
        ___qtablewidgetitem57->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\22336", nullptr));
        QTableWidgetItem *___qtablewidgetitem58 = tableWidget_3->verticalHeaderItem(5);
        ___qtablewidgetitem58->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\22337", nullptr));
        QTableWidgetItem *___qtablewidgetitem59 = tableWidget_3->verticalHeaderItem(6);
        ___qtablewidgetitem59->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\22338", nullptr));
        QTableWidgetItem *___qtablewidgetitem60 = tableWidget_3->verticalHeaderItem(7);
        ___qtablewidgetitem60->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\22339", nullptr));

        const bool __sortingEnabled2 = tableWidget_3->isSortingEnabled();
        tableWidget_3->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem61 = tableWidget_3->item(3, 1);
        ___qtablewidgetitem61->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\225\320\227\320\225\320\240\320\222", nullptr));
        QTableWidgetItem *___qtablewidgetitem62 = tableWidget_3->item(4, 1);
        ___qtablewidgetitem62->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\225\320\227\320\225\320\240\320\222", nullptr));
        QTableWidgetItem *___qtablewidgetitem63 = tableWidget_3->item(5, 1);
        ___qtablewidgetitem63->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\225\320\227\320\225\320\240\320\222", nullptr));
        QTableWidgetItem *___qtablewidgetitem64 = tableWidget_3->item(6, 1);
        ___qtablewidgetitem64->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\225\320\227\320\225\320\240\320\222", nullptr));
        QTableWidgetItem *___qtablewidgetitem65 = tableWidget_3->item(7, 1);
        ___qtablewidgetitem65->setText(QCoreApplication::translate("DeviceClientClass", "\320\240\320\225\320\227\320\225\320\240\320\222", nullptr));
        tableWidget_3->setSortingEnabled(__sortingEnabled2);

        pushButton_2->setText(QCoreApplication::translate("DeviceClientClass", "\320\247\321\202\320\265\320\275\320\270\320\265", nullptr));
        groupBox_2->setTitle(QString());
        radioButton_4->setText(QCoreApplication::translate("DeviceClientClass", "ALL", nullptr));
        radioButton->setText(QCoreApplication::translate("DeviceClientClass", "\320\223\321\200\321\203\320\277\320\277\320\260 1", nullptr));
        radioButton_2->setText(QCoreApplication::translate("DeviceClientClass", "\320\223\321\200\321\203\320\277\320\277\320\260 2", nullptr));
        radioButton_3->setText(QCoreApplication::translate("DeviceClientClass", "\320\223\321\200\321\203\320\277\320\277\320\260 3", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DeviceClientClass: public Ui_DeviceClientClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEVICECLIENT_H
