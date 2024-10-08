#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_msg_Button_clicked()
{
    ui->msg_label->setText("MSG: Hello world");
    QMessageBox::information(0,"Msg","Hello world");
}

