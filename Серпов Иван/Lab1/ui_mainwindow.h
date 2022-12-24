/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout;
    QLineEdit *lineEdit_a2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label;
    QLineEdit *lineEdit_a3;
    QLineEdit *lineEdit_a1;
    QGridLayout *gridLayout_2;
    QLineEdit *lineEdit_b2;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_b1;
    QLineEdit *lineEdit_b3;
    QLabel *label_6;
    QGridLayout *gridLayout_3;
    QLabel *label_8;
    QLabel *label_7;
    QLabel *label_9;
    QLineEdit *lineEdit_x0;
    QLineEdit *lineEdit_xd;
    QLineEdit *lineEdit_x1;
    QGridLayout *gridLayout_4;
    QPushButton *bExit;
    QPushButton *bCalc;
    QPushButton *bPrint;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->setEnabled(true);
        MainWindow->resize(600, 163);
        MainWindow->setMinimumSize(QSize(600, 163));
        MainWindow->setMaximumSize(QSize(600, 163));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        gridLayout_5 = new QGridLayout(centralwidget);
        gridLayout_5->setObjectName("gridLayout_5");
        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        gridLayout->setVerticalSpacing(0);
        lineEdit_a2 = new QLineEdit(centralwidget);
        lineEdit_a2->setObjectName("lineEdit_a2");

        gridLayout->addWidget(lineEdit_a2, 1, 1, 1, 1);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 0, 1, 1, 1);

        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 0, 2, 1, 1);

        label = new QLabel(centralwidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        lineEdit_a3 = new QLineEdit(centralwidget);
        lineEdit_a3->setObjectName("lineEdit_a3");

        gridLayout->addWidget(lineEdit_a3, 1, 2, 1, 1);

        lineEdit_a1 = new QLineEdit(centralwidget);
        lineEdit_a1->setObjectName("lineEdit_a1");

        gridLayout->addWidget(lineEdit_a1, 1, 0, 1, 1);


        gridLayout_5->addLayout(gridLayout, 0, 0, 1, 1);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        gridLayout_2->setVerticalSpacing(0);
        lineEdit_b2 = new QLineEdit(centralwidget);
        lineEdit_b2->setObjectName("lineEdit_b2");

        gridLayout_2->addWidget(lineEdit_b2, 1, 1, 1, 1);

        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");

        gridLayout_2->addWidget(label_4, 0, 1, 1, 1);

        label_5 = new QLabel(centralwidget);
        label_5->setObjectName("label_5");

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);

        lineEdit_b1 = new QLineEdit(centralwidget);
        lineEdit_b1->setObjectName("lineEdit_b1");

        gridLayout_2->addWidget(lineEdit_b1, 1, 0, 1, 1);

        lineEdit_b3 = new QLineEdit(centralwidget);
        lineEdit_b3->setObjectName("lineEdit_b3");

        gridLayout_2->addWidget(lineEdit_b3, 1, 2, 1, 1);

        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");

        gridLayout_2->addWidget(label_6, 0, 2, 1, 1);


        gridLayout_5->addLayout(gridLayout_2, 0, 1, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");

        gridLayout_3->addWidget(label_8, 0, 2, 1, 1);

        label_7 = new QLabel(centralwidget);
        label_7->setObjectName("label_7");

        gridLayout_3->addWidget(label_7, 0, 1, 1, 1);

        label_9 = new QLabel(centralwidget);
        label_9->setObjectName("label_9");

        gridLayout_3->addWidget(label_9, 0, 0, 1, 1);

        lineEdit_x0 = new QLineEdit(centralwidget);
        lineEdit_x0->setObjectName("lineEdit_x0");

        gridLayout_3->addWidget(lineEdit_x0, 1, 0, 1, 1);

        lineEdit_xd = new QLineEdit(centralwidget);
        lineEdit_xd->setObjectName("lineEdit_xd");

        gridLayout_3->addWidget(lineEdit_xd, 1, 2, 1, 1);

        lineEdit_x1 = new QLineEdit(centralwidget);
        lineEdit_x1->setObjectName("lineEdit_x1");

        gridLayout_3->addWidget(lineEdit_x1, 1, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout_3, 1, 0, 1, 2);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");
        gridLayout_4->setHorizontalSpacing(10);
        gridLayout_4->setVerticalSpacing(0);
        gridLayout_4->setContentsMargins(80, -1, 80, -1);
        bExit = new QPushButton(centralwidget);
        bExit->setObjectName("bExit");

        gridLayout_4->addWidget(bExit, 0, 2, 1, 1);

        bCalc = new QPushButton(centralwidget);
        bCalc->setObjectName("bCalc");
        bCalc->setEnabled(true);
        bCalc->setMaximumSize(QSize(542, 16777215));

        gridLayout_4->addWidget(bCalc, 0, 0, 1, 1);

        bPrint = new QPushButton(centralwidget);
        bPrint->setObjectName("bPrint");
        bPrint->setEnabled(false);

        gridLayout_4->addWidget(bPrint, 0, 1, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 2, 0, 1, 2);

        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        statusbar->setMinimumSize(QSize(0, 0));
        statusbar->setBaseSize(QSize(0, 0));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\234\320\270\320\241\320\236\320\241 Lab1. Serpov", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200 a2:", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200 a3:", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200 a1:", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200 b2:", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200 b1:", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200 b3:", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\250\320\260\320\263 \316\224x:", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\275\320\265\321\207\320\275\321\213\320\271 x:", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\321\207\320\260\320\273\321\214\320\275\321\213\320\271 x:", nullptr));
        bExit->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        bCalc->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\277\320\276\320\273\320\275\320\270\321\202\321\214 \321\200\320\260\321\201\321\207\321\221\321\202", nullptr));
        bPrint->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\207\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
