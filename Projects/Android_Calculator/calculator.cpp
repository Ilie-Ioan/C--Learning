#include "calculator.h"
#include "ui_calculator.h"

calculator::calculator(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::calculator)
{
    ui->setupUi(this);
    num1 = 0;
    symbol="";
}

calculator::~calculator()
{
    delete ui;
}

void calculator::on_num9_button_clicked()
{
    QString num = ui->output_lineedit->text();
    ui->output_lineedit->setText(num + "9");
}


void calculator::on_num8_button_clicked()
{

    QString num = ui->output_lineedit->text();
    ui->output_lineedit->setText(num + "8");
}


void calculator::on_num7_button_clicked()
{
    QString num = ui->output_lineedit->text();
    ui->output_lineedit->setText(num + "7");
}


void calculator::on_num0_button_clicked()
{
    QString num = ui->output_lineedit->text();
    ui->output_lineedit->setText(num + "0");
}


void calculator::on_num6_button_clicked()
{
    QString num = ui->output_lineedit->text();
    ui->output_lineedit->setText(num + "6");
}


void calculator::on_num5_button_clicked()
{
    QString num = ui->output_lineedit->text();
    ui->output_lineedit->setText(num + "5");
}


void calculator::on_num4_button_clicked()
{
    QString num = ui->output_lineedit->text();
    ui->output_lineedit->setText(num + "4");
}


void calculator::on_num3_button_clicked()
{
    QString num = ui->output_lineedit->text();
    ui->output_lineedit->setText(num + "3");
}


void calculator::on_num2_button_clicked()
{
    QString num = ui->output_lineedit->text();
    ui->output_lineedit->setText(num + "2");
}


void calculator::on_num1_button_clicked()
{
    QString num = ui->output_lineedit->text();
    ui->output_lineedit->setText(num + "1");
}


void calculator::on_clear_button_clicked()
{
    ui->output_lineedit->setText("");
}


void calculator::on_plus_button_clicked()
{
    num1 = ui->output_lineedit->text().toDouble();
    symbol = "+";
    ui->output_lineedit->setText("");
}


void calculator::on_minus_button_clicked()
{
    num1 = ui->output_lineedit->text().toDouble();
    symbol = "-";
    ui->output_lineedit->setText("");
}


void calculator::on_multiplication_button_clicked()
{
    num1 = ui->output_lineedit->text().toDouble();
    symbol = "*";
    ui->output_lineedit->setText("");
}


void calculator::on_divide_button_clicked()
{
    num1 = ui->output_lineedit->text().toDouble();
    symbol = "/";
    ui->output_lineedit->setText("");
}


void calculator::on_equal_button_clicked()
{
    double num2 = ui->output_lineedit->text().toDouble();
    double result=0;
    if(symbol == "+")result = num1 + num2;
    else
        if(symbol == "-")result = num1 - num2;
    else
        if(symbol == "*")result = num1 * num2;
    else
        if(symbol == "/")result = num1 / num2;
    ui->output_lineedit->setText(QString::number(result));

}

