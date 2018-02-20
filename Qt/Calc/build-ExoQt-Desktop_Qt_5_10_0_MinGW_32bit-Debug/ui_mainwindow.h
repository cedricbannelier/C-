/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btnPlus;
    QPushButton *btn9;
    QPushButton *btnMultiplier;
    QPushButton *btn8;
    QPushButton *btnMoins;
    QPushButton *btn7;
    QPushButton *btn4;
    QPushButton *btn6;
    QPushButton *btn3;
    QPushButton *btn5;
    QPushButton *btn0;
    QPushButton *btnRas;
    QPushButton *btnEgal;
    QPushButton *btnDiviser;
    QLCDNumber *lcdNumber;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(341, 241);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 70, 320, 112));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btn1 = new QPushButton(gridLayoutWidget);
        btn1->setObjectName(QStringLiteral("btn1"));

        gridLayout->addWidget(btn1, 0, 0, 1, 1);

        btn2 = new QPushButton(gridLayoutWidget);
        btn2->setObjectName(QStringLiteral("btn2"));

        gridLayout->addWidget(btn2, 0, 1, 1, 1);

        btnPlus = new QPushButton(gridLayoutWidget);
        btnPlus->setObjectName(QStringLiteral("btnPlus"));

        gridLayout->addWidget(btnPlus, 0, 3, 1, 1);

        btn9 = new QPushButton(gridLayoutWidget);
        btn9->setObjectName(QStringLiteral("btn9"));

        gridLayout->addWidget(btn9, 2, 2, 1, 1);

        btnMultiplier = new QPushButton(gridLayoutWidget);
        btnMultiplier->setObjectName(QStringLiteral("btnMultiplier"));

        gridLayout->addWidget(btnMultiplier, 2, 3, 1, 1);

        btn8 = new QPushButton(gridLayoutWidget);
        btn8->setObjectName(QStringLiteral("btn8"));

        gridLayout->addWidget(btn8, 2, 1, 1, 1);

        btnMoins = new QPushButton(gridLayoutWidget);
        btnMoins->setObjectName(QStringLiteral("btnMoins"));

        gridLayout->addWidget(btnMoins, 1, 3, 1, 1);

        btn7 = new QPushButton(gridLayoutWidget);
        btn7->setObjectName(QStringLiteral("btn7"));

        gridLayout->addWidget(btn7, 2, 0, 1, 1);

        btn4 = new QPushButton(gridLayoutWidget);
        btn4->setObjectName(QStringLiteral("btn4"));

        gridLayout->addWidget(btn4, 1, 0, 1, 1);

        btn6 = new QPushButton(gridLayoutWidget);
        btn6->setObjectName(QStringLiteral("btn6"));

        gridLayout->addWidget(btn6, 1, 2, 1, 1);

        btn3 = new QPushButton(gridLayoutWidget);
        btn3->setObjectName(QStringLiteral("btn3"));

        gridLayout->addWidget(btn3, 0, 2, 1, 1);

        btn5 = new QPushButton(gridLayoutWidget);
        btn5->setObjectName(QStringLiteral("btn5"));

        gridLayout->addWidget(btn5, 1, 1, 1, 1);

        btn0 = new QPushButton(gridLayoutWidget);
        btn0->setObjectName(QStringLiteral("btn0"));

        gridLayout->addWidget(btn0, 3, 0, 1, 1);

        btnRas = new QPushButton(gridLayoutWidget);
        btnRas->setObjectName(QStringLiteral("btnRas"));

        gridLayout->addWidget(btnRas, 3, 1, 1, 1);

        btnEgal = new QPushButton(gridLayoutWidget);
        btnEgal->setObjectName(QStringLiteral("btnEgal"));

        gridLayout->addWidget(btnEgal, 3, 2, 1, 1);

        btnDiviser = new QPushButton(gridLayoutWidget);
        btnDiviser->setObjectName(QStringLiteral("btnDiviser"));

        gridLayout->addWidget(btnDiviser, 3, 3, 1, 1);

        lcdNumber = new QLCDNumber(centralWidget);
        lcdNumber->setObjectName(QStringLiteral("lcdNumber"));
        lcdNumber->setGeometry(QRect(10, 10, 321, 51));
        lcdNumber->setDigitCount(16);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 341, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        btn1->setText(QApplication::translate("MainWindow", "1", nullptr));
        btn2->setText(QApplication::translate("MainWindow", "2", nullptr));
        btnPlus->setText(QApplication::translate("MainWindow", "+", nullptr));
        btn9->setText(QApplication::translate("MainWindow", "9", nullptr));
        btnMultiplier->setText(QApplication::translate("MainWindow", "X", nullptr));
        btn8->setText(QApplication::translate("MainWindow", "8", nullptr));
        btnMoins->setText(QApplication::translate("MainWindow", "-", nullptr));
        btn7->setText(QApplication::translate("MainWindow", "7", nullptr));
        btn4->setText(QApplication::translate("MainWindow", "4", nullptr));
        btn6->setText(QApplication::translate("MainWindow", "6", nullptr));
        btn3->setText(QApplication::translate("MainWindow", "3", nullptr));
        btn5->setText(QApplication::translate("MainWindow", "5", nullptr));
        btn0->setText(QApplication::translate("MainWindow", "0", nullptr));
        btnRas->setText(QApplication::translate("MainWindow", "C", nullptr));
        btnEgal->setText(QApplication::translate("MainWindow", "=", nullptr));
        btnDiviser->setText(QApplication::translate("MainWindow", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
