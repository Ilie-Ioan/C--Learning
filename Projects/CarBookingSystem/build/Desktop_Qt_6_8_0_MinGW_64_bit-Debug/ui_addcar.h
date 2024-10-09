/********************************************************************************
** Form generated from reading UI file 'addcar.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDCAR_H
#define UI_ADDCAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_addcar
{
public:
    QLabel *label;
    QLabel *car_number_label;
    QPushButton *exit_but;
    QPushButton *add_but;
    QLabel *Add_car_title;
    QLineEdit *car_number_lineedit;
    QLabel *brand_label;
    QLineEdit *brand_lineedit;
    QLabel *car_type_label;
    QListWidget *car_type_listwidget;
    QLabel *fare_label;
    QLineEdit *fare_line_edit;

    void setupUi(QDialog *addcar)
    {
        if (addcar->objectName().isEmpty())
            addcar->setObjectName("addcar");
        addcar->resize(702, 551);
        label = new QLabel(addcar);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 701, 551));
        label->setPixmap(QPixmap(QString::fromUtf8("Imagine.png")));
        car_number_label = new QLabel(addcar);
        car_number_label->setObjectName("car_number_label");
        car_number_label->setGeometry(QRect(0, 90, 361, 71));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell")});
        font.setPointSize(16);
        car_number_label->setFont(font);
        car_number_label->setStyleSheet(QString::fromUtf8("color:black;"));
        exit_but = new QPushButton(addcar);
        exit_but->setObjectName("exit_but");
        exit_but->setGeometry(QRect(590, 500, 101, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Ravie")});
        exit_but->setFont(font1);
        exit_but->setStyleSheet(QString::fromUtf8("background-color:grey;\n"
"color:black;\n"
"border-radius:10px;"));
        add_but = new QPushButton(addcar);
        add_but->setObjectName("add_but");
        add_but->setGeometry(QRect(10, 500, 111, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Ravie")});
        font2.setPointSize(10);
        add_but->setFont(font2);
        add_but->setStyleSheet(QString::fromUtf8("background-color:green;\n"
"color:black;\n"
"border-radius:10px;"));
        Add_car_title = new QLabel(addcar);
        Add_car_title->setObjectName("Add_car_title");
        Add_car_title->setGeometry(QRect(250, 0, 361, 71));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Rockwell")});
        font3.setPointSize(26);
        Add_car_title->setFont(font3);
        Add_car_title->setStyleSheet(QString::fromUtf8("color:black;"));
        car_number_lineedit = new QLineEdit(addcar);
        car_number_lineedit->setObjectName("car_number_lineedit");
        car_number_lineedit->setGeometry(QRect(80, 100, 241, 41));
        car_number_lineedit->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color:black;\n"
"border:2px solid grey;"));
        brand_label = new QLabel(addcar);
        brand_label->setObjectName("brand_label");
        brand_label->setGeometry(QRect(0, 150, 361, 71));
        brand_label->setFont(font);
        brand_label->setStyleSheet(QString::fromUtf8("color:black;"));
        brand_lineedit = new QLineEdit(addcar);
        brand_lineedit->setObjectName("brand_lineedit");
        brand_lineedit->setGeometry(QRect(80, 160, 241, 41));
        brand_lineedit->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"border:2px solid grey;\n"
"color:black;\n"
""));
        car_type_label = new QLabel(addcar);
        car_type_label->setObjectName("car_type_label");
        car_type_label->setGeometry(QRect(0, 210, 361, 71));
        car_type_label->setFont(font);
        car_type_label->setStyleSheet(QString::fromUtf8("color:black;"));
        car_type_listwidget = new QListWidget(addcar);
        car_type_listwidget->setObjectName("car_type_listwidget");
        car_type_listwidget->setGeometry(QRect(90, 230, 231, 31));
        QFont font4;
        font4.setPointSize(16);
        car_type_listwidget->setFont(font4);
        car_type_listwidget->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"border:2px solid grey;\n"
"color:black;\n"
""));
        fare_label = new QLabel(addcar);
        fare_label->setObjectName("fare_label");
        fare_label->setGeometry(QRect(360, 70, 361, 71));
        fare_label->setFont(font);
        fare_label->setStyleSheet(QString::fromUtf8("color:black;"));
        fare_line_edit = new QLineEdit(addcar);
        fare_line_edit->setObjectName("fare_line_edit");
        fare_line_edit->setGeometry(QRect(410, 90, 241, 41));
        fare_line_edit->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"border:2px solid grey;\n"
"color:black;\n"
""));

        retranslateUi(addcar);

        QMetaObject::connectSlotsByName(addcar);
    } // setupUi

    void retranslateUi(QDialog *addcar)
    {
        addcar->setWindowTitle(QCoreApplication::translate("addcar", "Dialog", nullptr));
        label->setText(QString());
        car_number_label->setText(QCoreApplication::translate("addcar", "Car NO", nullptr));
        exit_but->setText(QCoreApplication::translate("addcar", "Back", nullptr));
        add_but->setText(QCoreApplication::translate("addcar", "Add", nullptr));
        Add_car_title->setText(QCoreApplication::translate("addcar", "Add Car", nullptr));
        brand_label->setText(QCoreApplication::translate("addcar", "Brand", nullptr));
        car_type_label->setText(QCoreApplication::translate("addcar", "Car type", nullptr));
        fare_label->setText(QCoreApplication::translate("addcar", "Fare", nullptr));
    } // retranslateUi

};

namespace Ui {
    class addcar: public Ui_addcar {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDCAR_H
