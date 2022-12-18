#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    graph = new Graph();
    if(!graph->checkTemplate())
        this->MainWindow::~MainWindow();

    statusText = new QLabel("Введите все параметры и диапазон расчёта функции");
    ui->statusbar->addWidget(statusText);
}


void MainWindow::on_bCalc_clicked()
{
    if( ui->lineEdit_a1->text().isEmpty() || // проверка на пустые поля
        ui->lineEdit_a2->text().isEmpty() ||
        ui->lineEdit_a3->text().isEmpty() ||
        ui->lineEdit_b1->text().isEmpty() ||
        ui->lineEdit_b2->text().isEmpty() ||
        ui->lineEdit_b3->text().isEmpty() ||
        ui->lineEdit_x0->text().isEmpty() ||
        ui->lineEdit_x1->text().isEmpty() ||
        ui->lineEdit_xd->text().isEmpty())
    {
        statusText->setText("Заполнены не все поля! Заполните недостающие и повторите расчёт");
        return;
    }

    graph->getParam(ui->lineEdit_a1->text().toDouble(),
                    ui->lineEdit_a2->text().toDouble(),
                    ui->lineEdit_a3->text().toDouble(),
                    ui->lineEdit_b1->text().toDouble(),
                    ui->lineEdit_b2->text().toDouble(),
                    ui->lineEdit_b3->text().toDouble(),
                    ui->lineEdit_x0->text().toDouble(),
                    ui->lineEdit_x1->text().toDouble(),
                    ui->lineEdit_xd->text().toDouble());

    graph->DoCalc();
    graph->show();
    statusText->setText("Функция расчитана. График можно увидеть в Excel");
    ui->bCalc->setEnabled(false);
    ui->bPrint->setEnabled(true);
}

void MainWindow::on_bExit_clicked()
{
    MainWindow::close();
}


MainWindow::~MainWindow()
{
    delete graph;
    delete ui;
}


void MainWindow::on_bPrint_clicked()
{
    statusText->setText("Задание отправлено на печать на принтере по-умолчанию");
    graph->print();
}
