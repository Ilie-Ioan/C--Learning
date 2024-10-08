#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class calculator;
}
QT_END_NAMESPACE

class calculator : public QMainWindow
{
    Q_OBJECT

public:
    calculator(QWidget *parent = nullptr);
    ~calculator();

private slots:
    void on_num9_button_clicked();

    void on_num8_button_clicked();

    void on_num7_button_clicked();

    void on_num0_button_clicked();

    void on_num6_button_clicked();

    void on_num5_button_clicked();

    void on_num4_button_clicked();

    void on_num3_button_clicked();

    void on_num2_button_clicked();

    void on_num1_button_clicked();

    void on_clear_button_clicked();

    void on_plus_button_clicked();

    void on_minus_button_clicked();

    void on_multiplication_button_clicked();

    void on_divide_button_clicked();

    void on_equal_button_clicked();

private:
    Ui::calculator *ui;
    double num1;
    QString symbol;
};
#endif // CALCULATOR_H
