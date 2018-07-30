/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QDate>
#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *queryButton;
    QPushButton *yuebaoButton;
    QPushButton *excelButton;
    QLabel *label_7;
    QCheckBox *allBox;
    QCheckBox *buoyBox;
    QCheckBox *watertBox;
    QCheckBox *waveBox;
    QCheckBox *humBox;
    QCheckBox *curBox;
    QCheckBox *airpBox;
    QCheckBox *windBox;
    QTableView *tableView;
    QGroupBox *groupBox;
    QDateEdit *dateEditStart;
    QLabel *label;
    QLabel *label_2;
    QDateEdit *dateEditEnd;
    QLabel *label_3;
    QComboBox *comboBox;
    QGroupBox *groupBox_2;
    QLabel *label_5;
    QLabel *label_yjss;
    QLabel *label_9;
    QLabel *label_cjs;
    QLabel *label_10;
    QLabel *label_zj;
    QLabel *label_12;
    QLabel *label_bdjs;
    QLabel *label_14;
    QLabel *label_bssjsl;
    QLabel *label_16;
    QLabel *label_zssjsl;
    QLabel *label_18;
    QLabel *label_cssjsl;
    QLabel *label_20;
    QLabel *label_zssjs;
    QLabel *label_22;
    QLabel *label_cssjs;
    QLabel *label_24;
    QLabel *label_nssjs;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(1312, 836);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setMouseTracking(true);
        MainWindow->setAnimated(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        queryButton = new QPushButton(centralWidget);
        queryButton->setObjectName(QStringLiteral("queryButton"));
        queryButton->setGeometry(QRect(410, 38, 93, 28));
        yuebaoButton = new QPushButton(centralWidget);
        yuebaoButton->setObjectName(QStringLiteral("yuebaoButton"));
        yuebaoButton->setGeometry(QRect(410, 100, 93, 28));
        excelButton = new QPushButton(centralWidget);
        excelButton->setObjectName(QStringLiteral("excelButton"));
        excelButton->setGeometry(QRect(410, 153, 94, 28));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(23, 200, 100, 20));
        label_7->setMinimumSize(QSize(100, 20));
        allBox = new QCheckBox(centralWidget);
        allBox->setObjectName(QStringLiteral("allBox"));
        allBox->setGeometry(QRect(170, 200, 100, 20));
        allBox->setMinimumSize(QSize(100, 20));
        buoyBox = new QCheckBox(centralWidget);
        buoyBox->setObjectName(QStringLiteral("buoyBox"));
        buoyBox->setGeometry(QRect(1014, 200, 100, 20));
        buoyBox->setMinimumSize(QSize(100, 20));
        buoyBox->setMaximumSize(QSize(100, 20));
        watertBox = new QCheckBox(centralWidget);
        watertBox->setObjectName(QStringLiteral("watertBox"));
        watertBox->setGeometry(QRect(907, 200, 100, 20));
        watertBox->setMinimumSize(QSize(100, 20));
        watertBox->setMaximumSize(QSize(100, 20));
        waveBox = new QCheckBox(centralWidget);
        waveBox->setObjectName(QStringLiteral("waveBox"));
        waveBox->setGeometry(QRect(318, 200, 100, 20));
        waveBox->setMinimumSize(QSize(100, 20));
        waveBox->setChecked(false);
        humBox = new QCheckBox(centralWidget);
        humBox->setObjectName(QStringLiteral("humBox"));
        humBox->setGeometry(QRect(612, 200, 100, 20));
        humBox->setMinimumSize(QSize(100, 20));
        curBox = new QCheckBox(centralWidget);
        curBox->setObjectName(QStringLiteral("curBox"));
        curBox->setGeometry(QRect(1121, 200, 100, 20));
        curBox->setMinimumSize(QSize(100, 20));
        curBox->setMaximumSize(QSize(100, 20));
        airpBox = new QCheckBox(centralWidget);
        airpBox->setObjectName(QStringLiteral("airpBox"));
        airpBox->setGeometry(QRect(760, 200, 100, 20));
        airpBox->setMinimumSize(QSize(100, 20));
        windBox = new QCheckBox(centralWidget);
        windBox->setObjectName(QStringLiteral("windBox"));
        windBox->setGeometry(QRect(465, 200, 100, 20));
        windBox->setMinimumSize(QSize(100, 20));
        tableView = new QTableView(centralWidget);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(23, 227, 1201, 521));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tableView->sizePolicy().hasHeightForWidth());
        tableView->setSizePolicy(sizePolicy1);
        tableView->setMinimumSize(QSize(1201, 501));
        tableView->setMaximumSize(QSize(1000, 1000));
        tableView->setSizeIncrement(QSize(0, 0));
        tableView->setBaseSize(QSize(0, 250));
        tableView->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableView->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        tableView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustToContentsOnFirstShow);
        tableView->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        tableView->setAlternatingRowColors(false);
        tableView->setSelectionMode(QAbstractItemView::ContiguousSelection);
        tableView->setTextElideMode(Qt::ElideMiddle);
        tableView->setShowGrid(true);
        tableView->horizontalHeader()->setCascadingSectionResizes(false);
        tableView->horizontalHeader()->setDefaultSectionSize(125);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(23, 20, 370, 170));
        groupBox->setMinimumSize(QSize(370, 170));
        dateEditStart = new QDateEdit(groupBox);
        dateEditStart->setObjectName(QStringLiteral("dateEditStart"));
        dateEditStart->setEnabled(true);
        dateEditStart->setGeometry(QRect(90, 40, 110, 31));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(dateEditStart->sizePolicy().hasHeightForWidth());
        dateEditStart->setSizePolicy(sizePolicy2);
        dateEditStart->setInputMethodHints(Qt::ImhNone);
        dateEditStart->setFrame(true);
        dateEditStart->setCalendarPopup(true);
        dateEditStart->setDate(QDate(2017, 1, 1));
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 40, 71, 31));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(210, 40, 21, 31));
        dateEditEnd = new QDateEdit(groupBox);
        dateEditEnd->setObjectName(QStringLiteral("dateEditEnd"));
        dateEditEnd->setEnabled(true);
        dateEditEnd->setGeometry(QRect(240, 40, 110, 31));
        sizePolicy2.setHeightForWidth(dateEditEnd->sizePolicy().hasHeightForWidth());
        dateEditEnd->setSizePolicy(sizePolicy2);
        dateEditEnd->setInputMethodHints(Qt::ImhNone);
        dateEditEnd->setDateTime(QDateTime(QDate(2018, 1, 1), QTime(0, 0, 0)));
        dateEditEnd->setCalendarPopup(true);
        dateEditEnd->setDate(QDate(2018, 1, 1));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(10, 90, 71, 41));
        comboBox = new QComboBox(groupBox);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(90, 100, 87, 22));
        comboBox->setMinimumSize(QSize(87, 22));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(520, 30, 701, 170));
        groupBox_2->setMinimumSize(QSize(600, 0));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 30, 81, 21));
        label_yjss = new QLabel(groupBox_2);
        label_yjss->setObjectName(QStringLiteral("label_yjss"));
        label_yjss->setGeometry(QRect(100, 30, 51, 21));
        label_yjss->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255);"));
        label_yjss->setAlignment(Qt::AlignCenter);
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(160, 80, 90, 21));
        label_cjs = new QLabel(groupBox_2);
        label_cjs->setObjectName(QStringLiteral("label_cjs"));
        label_cjs->setGeometry(QRect(250, 80, 51, 21));
        label_cjs->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255);"));
        label_cjs->setAlignment(Qt::AlignCenter);
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(170, 30, 90, 21));
        label_zj = new QLabel(groupBox_2);
        label_zj->setObjectName(QStringLiteral("label_zj"));
        label_zj->setGeometry(QRect(250, 30, 51, 21));
        label_zj->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255);"));
        label_zj->setAlignment(Qt::AlignCenter);
        label_12 = new QLabel(groupBox_2);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(160, 130, 90, 21));
        label_bdjs = new QLabel(groupBox_2);
        label_bdjs->setObjectName(QStringLiteral("label_bdjs"));
        label_bdjs->setGeometry(QRect(250, 130, 51, 21));
        label_bdjs->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255);"));
        label_bdjs->setAlignment(Qt::AlignCenter);
        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(510, 130, 120, 21));
        label_bssjsl = new QLabel(groupBox_2);
        label_bssjsl->setObjectName(QStringLiteral("label_bssjsl"));
        label_bssjsl->setGeometry(QRect(630, 130, 51, 21));
        label_bssjsl->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255);"));
        label_bssjsl->setAlignment(Qt::AlignCenter);
        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setGeometry(QRect(510, 30, 120, 21));
        label_zssjsl = new QLabel(groupBox_2);
        label_zssjsl->setObjectName(QStringLiteral("label_zssjsl"));
        label_zssjsl->setGeometry(QRect(630, 30, 51, 21));
        label_zssjsl->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255);"));
        label_zssjsl->setAlignment(Qt::AlignCenter);
        label_18 = new QLabel(groupBox_2);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setGeometry(QRect(510, 80, 120, 21));
        label_cssjsl = new QLabel(groupBox_2);
        label_cssjsl->setObjectName(QStringLiteral("label_cssjsl"));
        label_cssjsl->setGeometry(QRect(630, 80, 51, 21));
        label_cssjsl->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255);"));
        label_cssjsl->setAlignment(Qt::AlignCenter);
        label_20 = new QLabel(groupBox_2);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setGeometry(QRect(320, 30, 120, 21));
        label_zssjs = new QLabel(groupBox_2);
        label_zssjs->setObjectName(QStringLiteral("label_zssjs"));
        label_zssjs->setGeometry(QRect(440, 30, 51, 21));
        label_zssjs->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255);"));
        label_zssjs->setAlignment(Qt::AlignCenter);
        label_22 = new QLabel(groupBox_2);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setGeometry(QRect(320, 80, 120, 21));
        label_cssjs = new QLabel(groupBox_2);
        label_cssjs->setObjectName(QStringLiteral("label_cssjs"));
        label_cssjs->setGeometry(QRect(440, 80, 51, 21));
        label_cssjs->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255);"));
        label_cssjs->setAlignment(Qt::AlignCenter);
        label_24 = new QLabel(groupBox_2);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setGeometry(QRect(320, 130, 120, 21));
        label_nssjs = new QLabel(groupBox_2);
        label_nssjs->setObjectName(QStringLiteral("label_nssjs"));
        label_nssjs->setGeometry(QRect(440, 130, 51, 21));
        label_nssjs->setStyleSheet(QStringLiteral("background-color:rgb(255, 255, 255);"));
        label_nssjs->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1312, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
#ifndef QT_NO_SHORTCUT
        label_7->setBuddy(allBox);
        label->setBuddy(dateEditStart);
        label_2->setBuddy(dateEditEnd);
        label_3->setBuddy(comboBox);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(yuebaoButton, excelButton);
        QWidget::setTabOrder(excelButton, allBox);
        QWidget::setTabOrder(allBox, waveBox);
        QWidget::setTabOrder(waveBox, windBox);
        QWidget::setTabOrder(windBox, humBox);
        QWidget::setTabOrder(humBox, airpBox);
        QWidget::setTabOrder(airpBox, watertBox);
        QWidget::setTabOrder(watertBox, dateEditStart);
        QWidget::setTabOrder(dateEditStart, dateEditEnd);
        QWidget::setTabOrder(dateEditEnd, tableView);

        retranslateUi(MainWindow);
        QObject::connect(comboBox, SIGNAL(currentIndexChanged(int)), queryButton, SLOT(click()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        queryButton->setText(QApplication::translate("MainWindow", "\346\237\245\350\257\242", Q_NULLPTR));
        yuebaoButton->setText(QApplication::translate("MainWindow", "\347\224\237\346\210\220\346\234\210\346\212\245", Q_NULLPTR));
        excelButton->setText(QApplication::translate("MainWindow", "\345\257\274\345\207\272\350\207\263Excel", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272\347\255\233\351\200\211\351\241\271\357\274\232", Q_NULLPTR));
        allBox->setText(QApplication::translate("MainWindow", "\345\205\250\351\203\250", Q_NULLPTR));
        buoyBox->setText(QApplication::translate("MainWindow", "\346\265\256\346\240\207\347\212\266\346\200\201", Q_NULLPTR));
        watertBox->setText(QApplication::translate("MainWindow", "\346\260\264\346\270\251", Q_NULLPTR));
        waveBox->setText(QApplication::translate("MainWindow", "\346\263\242\346\265\252", Q_NULLPTR));
        humBox->setText(QApplication::translate("MainWindow", "\346\270\251\346\271\277\345\272\246", Q_NULLPTR));
        curBox->setText(QApplication::translate("MainWindow", "\346\265\267\346\265\201\345\222\214\346\260\264\350\264\250", Q_NULLPTR));
        airpBox->setText(QApplication::translate("MainWindow", "\346\260\224\345\216\213", Q_NULLPTR));
        windBox->setText(QApplication::translate("MainWindow", "\351\243\216", Q_NULLPTR));
        groupBox->setTitle(QApplication::translate("MainWindow", "\346\237\245\350\257\242\346\235\241\344\273\266", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\346\227\266\351\227\264\357\274\232", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\350\207\263", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "\346\265\256\346\240\207\345\217\267\357\274\232", Q_NULLPTR));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\346\216\245\345\217\227\347\216\207\347\273\237\350\256\241\346\225\260\346\215\256", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\345\272\224\346\216\245\346\224\266\346\225\260\357\274\232", Q_NULLPTR));
        label_yjss->setText(QString());
        label_9->setText(QApplication::translate("MainWindow", "CDMA\346\216\245\346\224\266\346\225\260\357\274\232", Q_NULLPTR));
        label_cjs->setText(QString());
        label_10->setText(QApplication::translate("MainWindow", " \346\200\273\346\216\245\346\224\266\346\225\260:", Q_NULLPTR));
        label_zj->setText(QString());
        label_12->setText(QApplication::translate("MainWindow", "\345\214\227\346\226\227\346\216\245\346\224\266\346\225\260\357\274\232", Q_NULLPTR));
        label_bdjs->setText(QString());
        label_14->setText(QApplication::translate("MainWindow", "\345\214\227\346\226\227\345\256\236\346\227\266\346\216\245\346\224\266\347\216\207\357\274\232", Q_NULLPTR));
        label_bssjsl->setText(QString());
        label_16->setText(QApplication::translate("MainWindow", "  \346\200\273\345\256\236\346\227\266\346\216\245\346\224\266\347\216\207:", Q_NULLPTR));
        label_zssjsl->setText(QString());
        label_18->setText(QApplication::translate("MainWindow", "CDMA\345\256\236\346\227\266\346\216\245\346\224\266\347\216\207\357\274\232", Q_NULLPTR));
        label_cssjsl->setText(QString());
        label_20->setText(QApplication::translate("MainWindow", "  \346\200\273\345\256\236\346\227\266\346\216\245\346\224\266\346\225\260:", Q_NULLPTR));
        label_zssjs->setText(QString());
        label_22->setText(QApplication::translate("MainWindow", "CDMA\345\256\236\346\227\266\346\216\245\346\224\266\346\225\260\357\274\232", Q_NULLPTR));
        label_cssjs->setText(QString());
        label_24->setText(QApplication::translate("MainWindow", "\345\214\227\346\226\227\345\256\236\346\227\266\346\216\245\346\224\266\346\225\260\357\274\232", Q_NULLPTR));
        label_nssjs->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
