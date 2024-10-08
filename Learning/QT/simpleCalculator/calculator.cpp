#include "calculator.h"
#include "ui_calculator.h"

calculator::calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::calculator)
{
    ui->setupUi(this);
}

calculator::~calculator()
{
    delete ui;
}

void calculator::on_plus_button_clicked()
{
    int num1 = ui->num1_linedit->text().toInt();
    int num2 = ui->num2_linedit->text().toInt();
    int result = num1 + num2;

    QString Result = QString::number(result);
    ui->result_linedit_2->setText(Result);
}


void calculator::on_minus_button_clicked()
{
    int num1 = ui->num1_linedit->text().toInt();
    int num2 = ui->num2_linedit->text().toInt();
    int result = num1 - num2;

    QString Result = QString::number(result);
    ui->result_linedit_2->setText(Result);
}


void calculator::on_multiplication_button_clicked()
{
    int num1 = ui->num1_linedit->text().toInt();
    int num2 = ui->num2_linedit->text().toInt();
    int result = num1 * num2;

    QString Result = QString::number(result);
    ui->result_linedit_2->setText(Result);
}


void calculator::on_divede_button_clicked()
{
    int num1 = ui->num1_linedit->text().toInt();
    int num2 = ui->num2_linedit->text().toInt();
    int result = num1 / num2;

    QString Result = QString::number(result);
    ui->result_linedit_2->setText(Result);
}

