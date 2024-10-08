/********************************************************************************
** Form generated from reading UI file 'calculator.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATOR_H
#define UI_CALCULATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_calculator
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *num1label;
    QLabel *num2label;
    QLabel *resultlabel;
    QLineEdit *num1_linedit;
    QLineEdit *num2_linedit;
    QLineEdit *result_linedit_2;
    QPushButton *plus_button;
    QPushButton *minus_button;
    QPushButton *multiplication_button;
    QPushButton *divede_button;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *calculator)
    {
        if (calculator->objectName().isEmpty())
            calculator->setObjectName("calculator");
        calculator->resize(519, 456);
        centralwidget = new QWidget(calculator);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(130, 80, 211, 41));
        QFont font;
        font.setPointSize(20);
        label->setFont(font);
        num1label = new QLabel(centralwidget);
        num1label->setObjectName("num1label");
        num1label->setGeometry(QRect(90, 200, 101, 41));
        QFont font1;
        font1.setPointSize(12);
        num1label->setFont(font1);
        num2label = new QLabel(centralwidget);
        num2label->setObjectName("num2label");
        num2label->setGeometry(QRect(90, 250, 101, 41));
        num2label->setFont(font1);
        resultlabel = new QLabel(centralwidget);
        resultlabel->setObjectName("resultlabel");
        resultlabel->setGeometry(QRect(90, 310, 71, 21));
        resultlabel->setFont(font1);
        num1_linedit = new QLineEdit(centralwidget);
        num1_linedit->setObjectName("num1_linedit");
        num1_linedit->setGeometry(QRect(210, 193, 171, 41));
        num1_linedit->setFont(font1);
        num2_linedit = new QLineEdit(centralwidget);
        num2_linedit->setObjectName("num2_linedit");
        num2_linedit->setGeometry(QRect(210, 253, 171, 31));
        num2_linedit->setFont(font1);
        result_linedit_2 = new QLineEdit(centralwidget);
        result_linedit_2->setObjectName("result_linedit_2");
        result_linedit_2->setGeometry(QRect(210, 300, 171, 41));
        result_linedit_2->setFont(font1);
        plus_button = new QPushButton(centralwidget);
        plus_button->setObjectName("plus_button");
        plus_button->setGeometry(QRect(40, 353, 80, 51));
        plus_button->setFont(font1);
        minus_button = new QPushButton(centralwidget);
        minus_button->setObjectName("minus_button");
        minus_button->setGeometry(QRect(160, 353, 80, 51));
        minus_button->setFont(font1);
        multiplication_button = new QPushButton(centralwidget);
        multiplication_button->setObjectName("multiplication_button");
        multiplication_button->setGeometry(QRect(270, 353, 80, 51));
        multiplication_button->setFont(font1);
        divede_button = new QPushButton(centralwidget);
        divede_button->setObjectName("divede_button");
        divede_button->setGeometry(QRect(390, 353, 80, 51));
        divede_button->setFont(font1);
        calculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(calculator);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 519, 21));
        calculator->setMenuBar(menubar);
        statusbar = new QStatusBar(calculator);
        statusbar->setObjectName("statusbar");
        calculator->setStatusBar(statusbar);

        retranslateUi(calculator);

        QMetaObject::connectSlotsByName(calculator);
    } // setupUi

    void retranslateUi(QMainWindow *calculator)
    {
        calculator->setWindowTitle(QCoreApplication::translate("calculator", "calculator", nullptr));
        label->setText(QCoreApplication::translate("calculator", "Simple Calculator", nullptr));
        num1label->setText(QCoreApplication::translate("calculator", "number 1", nullptr));
        num2label->setText(QCoreApplication::translate("calculator", "number 2", nullptr));
        resultlabel->setText(QCoreApplication::translate("calculator", "Result", nullptr));
        plus_button->setText(QCoreApplication::translate("calculator", "+", nullptr));
        minus_button->setText(QCoreApplication::translate("calculator", "-", nullptr));
        multiplication_button->setText(QCoreApplication::translate("calculator", "*", nullptr));
        divede_button->setText(QCoreApplication::translate("calculator", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class calculator: public Ui_calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
