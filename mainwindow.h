#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>

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
    void on_pushButtonConnect_clicked();
    void connectedToHost();
    void disconnectedFromHost();
    void readFromHost();

    void on_pushButtonSend_clicked();

    void on_pushButtonClear_clicked();

private:
    Ui::MainWindow *ui;
    QTcpSocket socket;
};
#endif // MAINWINDOW_H
