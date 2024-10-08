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
    QLineEdit *output_lineedit;
    QLabel *label;
    QPushButton *num9_button;
    QPushButton *clear_button;
    QPushButton *equal_button;
    QPushButton *plus_button;
    QPushButton *minus_button;
    QPushButton *num7_button;
    QPushButton *num6_button;
    QPushButton *num8_button;
    QPushButton *multiplication_button;
    QPushButton *num4_button;
    QPushButton *num3_button;
    QPushButton *num5_button;
    QPushButton *divide_button;
    QPushButton *num1_button;
    QPushButton *num0_button;
    QPushButton *num2_button;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *calculator)
    {
        if (calculator->objectName().isEmpty())
            calculator->setObjectName("calculator");
        calculator->resize(369, 635);
        calculator->setStyleSheet(QString::fromUtf8("background-color:black"));
        centralwidget = new QWidget(calculator);
        centralwidget->setObjectName("centralwidget");
        output_lineedit = new QLineEdit(centralwidget);
        output_lineedit->setObjectName("output_lineedit");
        output_lineedit->setGeometry(QRect(10, 80, 351, 141));
        QFont font;
        font.setPointSize(18);
        output_lineedit->setFont(font);
        output_lineedit->setStyleSheet(QString::fromUtf8("background-color:grey"));
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 161, 61));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("MS UI Gothic")});
        font1.setPointSize(25);
        label->setFont(font1);
        num9_button = new QPushButton(centralwidget);
        num9_button->setObjectName("num9_button");
        num9_button->setGeometry(QRect(10, 290, 80, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("OCR A Extended")});
        font2.setPointSize(16);
        num9_button->setFont(font2);
        num9_button->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black"));
        clear_button = new QPushButton(centralwidget);
        clear_button->setObjectName("clear_button");
        clear_button->setGeometry(QRect(100, 230, 80, 41));
        clear_button->setFont(font2);
        clear_button->setStyleSheet(QString::fromUtf8("background-color:orange;\n"
"color:black"));
        equal_button = new QPushButton(centralwidget);
        equal_button->setObjectName("equal_button");
        equal_button->setGeometry(QRect(190, 230, 80, 41));
        equal_button->setFont(font2);
        equal_button->setStyleSheet(QString::fromUtf8("background-color:orange;\n"
"color:black"));
        plus_button = new QPushButton(centralwidget);
        plus_button->setObjectName("plus_button");
        plus_button->setGeometry(QRect(280, 230, 80, 41));
        plus_button->setFont(font2);
        plus_button->setStyleSheet(QString::fromUtf8("background-color:orange;\n"
"color:black"));
        minus_button = new QPushButton(centralwidget);
        minus_button->setObjectName("minus_button");
        minus_button->setGeometry(QRect(280, 290, 80, 41));
        minus_button->setFont(font2);
        minus_button->setStyleSheet(QString::fromUtf8("background-color:orange;\n"
"color:black"));
        num7_button = new QPushButton(centralwidget);
        num7_button->setObjectName("num7_button");
        num7_button->setGeometry(QRect(190, 290, 80, 41));
        num7_button->setFont(font2);
        num7_button->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black"));
        num6_button = new QPushButton(centralwidget);
        num6_button->setObjectName("num6_button");
        num6_button->setGeometry(QRect(10, 340, 80, 41));
        num6_button->setFont(font2);
        num6_button->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black"));
        num8_button = new QPushButton(centralwidget);
        num8_button->setObjectName("num8_button");
        num8_button->setGeometry(QRect(100, 290, 80, 41));
        num8_button->setFont(font2);
        num8_button->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black"));
        multiplication_button = new QPushButton(centralwidget);
        multiplication_button->setObjectName("multiplication_button");
        multiplication_button->setGeometry(QRect(280, 340, 80, 41));
        multiplication_button->setFont(font2);
        multiplication_button->setStyleSheet(QString::fromUtf8("background-color:orange;\n"
"color:black"));
        num4_button = new QPushButton(centralwidget);
        num4_button->setObjectName("num4_button");
        num4_button->setGeometry(QRect(190, 340, 80, 41));
        num4_button->setFont(font2);
        num4_button->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black"));
        num3_button = new QPushButton(centralwidget);
        num3_button->setObjectName("num3_button");
        num3_button->setGeometry(QRect(10, 390, 80, 41));
        num3_button->setFont(font2);
        num3_button->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black"));
        num5_button = new QPushButton(centralwidget);
        num5_button->setObjectName("num5_button");
        num5_button->setGeometry(QRect(100, 340, 80, 41));
        num5_button->setFont(font2);
        num5_button->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black"));
        divide_button = new QPushButton(centralwidget);
        divide_button->setObjectName("divide_button");
        divide_button->setGeometry(QRect(280, 390, 80, 41));
        divide_button->setFont(font2);
        divide_button->setStyleSheet(QString::fromUtf8("background-color:orange;\n"
"color:black"));
        num1_button = new QPushButton(centralwidget);
        num1_button->setObjectName("num1_button");
        num1_button->setGeometry(QRect(190, 390, 80, 41));
        num1_button->setFont(font2);
        num1_button->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black"));
        num0_button = new QPushButton(centralwidget);
        num0_button->setObjectName("num0_button");
        num0_button->setGeometry(QRect(10, 230, 80, 41));
        num0_button->setFont(font2);
        num0_button->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black"));
        num2_button = new QPushButton(centralwidget);
        num2_button->setObjectName("num2_button");
        num2_button->setGeometry(QRect(100, 390, 80, 41));
        num2_button->setFont(font2);
        num2_button->setStyleSheet(QString::fromUtf8("background-color:white;\n"
"color:black"));
        calculator->setCentralWidget(centralwidget);
        menubar = new QMenuBar(calculator);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 369, 21));
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
        label->setText(QCoreApplication::translate("calculator", "Calculator", nullptr));
        num9_button->setText(QCoreApplication::translate("calculator", "9", nullptr));
        clear_button->setText(QCoreApplication::translate("calculator", "C", nullptr));
        equal_button->setText(QCoreApplication::translate("calculator", "=", nullptr));
        plus_button->setText(QCoreApplication::translate("calculator", "+", nullptr));
        minus_button->setText(QCoreApplication::translate("calculator", "-", nullptr));
        num7_button->setText(QCoreApplication::translate("calculator", "7", nullptr));
        num6_button->setText(QCoreApplication::translate("calculator", "6", nullptr));
        num8_button->setText(QCoreApplication::translate("calculator", "8", nullptr));
        multiplication_button->setText(QCoreApplication::translate("calculator", "*", nullptr));
        num4_button->setText(QCoreApplication::translate("calculator", "4", nullptr));
        num3_button->setText(QCoreApplication::translate("calculator", "3", nullptr));
        num5_button->setText(QCoreApplication::translate("calculator", "5", nullptr));
        divide_button->setText(QCoreApplication::translate("calculator", "/", nullptr));
        num1_button->setText(QCoreApplication::translate("calculator", "1", nullptr));
        num0_button->setText(QCoreApplication::translate("calculator", "0", nullptr));
        num2_button->setText(QCoreApplication::translate("calculator", "2", nullptr));
    } // retranslateUi

};

namespace Ui {
    class calculator: public Ui_calculator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATOR_H
