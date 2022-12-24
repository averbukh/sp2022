#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>
#include "graph.cpp"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_bCalc_clicked();

    void on_bExit_clicked();

    void on_bPrint_clicked();

private:
    Ui::MainWindow *ui;
    QLabel *statusText;
    Graph* graph;
};

#endif // MAINWINDOW_H
