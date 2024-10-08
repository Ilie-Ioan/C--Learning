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
    void on_plus_button_clicked();

    void on_minus_button_clicked();

    void on_multiplication_button_clicked();

    void on_divede_button_clicked();

private:
    Ui::calculator *ui;
};
#endif // CALCULATOR_H
