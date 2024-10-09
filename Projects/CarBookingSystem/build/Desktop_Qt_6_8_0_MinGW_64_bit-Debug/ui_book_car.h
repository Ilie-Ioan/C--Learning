/********************************************************************************
** Form generated from reading UI file 'book_car.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOK_CAR_H
#define UI_BOOK_CAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_book_car
{
public:
    QLabel *label;
    QLineEdit *name_lineedit;
    QLabel *Book_car_title;
    QLabel *Name_label;
    QPushButton *book_but;
    QLabel *Age_label;
    QLineEdit *age_lineedit;
    QPushButton *exit_but;
    QRadioButton *male_radio;
    QRadioButton *female_radio;
    QLineEdit *pick_lineedit;
    QLabel *Pick_label;
    QLabel *Dest_label;
    QLineEdit *Dest_lineedit;
    QLabel *Select_label;
    QListWidget *listWidget;

    void setupUi(QDialog *book_car)
    {
        if (book_car->objectName().isEmpty())
            book_car->setObjectName("book_car");
        book_car->resize(698, 550);
        label = new QLabel(book_car);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 0, 701, 551));
        label->setPixmap(QPixmap(QString::fromUtf8("Imagine.png")));
        name_lineedit = new QLineEdit(book_car);
        name_lineedit->setObjectName("name_lineedit");
        name_lineedit->setGeometry(QRect(10, 120, 241, 41));
        name_lineedit->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color:black;\n"
"border:2px solid grey;"));
        Book_car_title = new QLabel(book_car);
        Book_car_title->setObjectName("Book_car_title");
        Book_car_title->setGeometry(QRect(260, 10, 361, 71));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell")});
        font.setPointSize(26);
        Book_car_title->setFont(font);
        Book_car_title->setStyleSheet(QString::fromUtf8("color:black;"));
        Name_label = new QLabel(book_car);
        Name_label->setObjectName("Name_label");
        Name_label->setGeometry(QRect(10, 70, 61, 71));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Rockwell")});
        font1.setPointSize(16);
        Name_label->setFont(font1);
        Name_label->setStyleSheet(QString::fromUtf8("color:black;"));
        book_but = new QPushButton(book_car);
        book_but->setObjectName("book_but");
        book_but->setGeometry(QRect(10, 500, 111, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Ravie")});
        font2.setPointSize(10);
        book_but->setFont(font2);
        book_but->setStyleSheet(QString::fromUtf8("background-color:green;\n"
"color:black;\n"
"border-radius:10px;"));
        Age_label = new QLabel(book_car);
        Age_label->setObjectName("Age_label");
        Age_label->setGeometry(QRect(10, 160, 41, 71));
        Age_label->setFont(font1);
        Age_label->setStyleSheet(QString::fromUtf8("color:black;"));
        age_lineedit = new QLineEdit(book_car);
        age_lineedit->setObjectName("age_lineedit");
        age_lineedit->setGeometry(QRect(10, 210, 241, 41));
        age_lineedit->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"border:2px solid grey;\n"
"color:black;\n"
""));
        exit_but = new QPushButton(book_car);
        exit_but->setObjectName("exit_but");
        exit_but->setGeometry(QRect(580, 490, 101, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Ravie")});
        exit_but->setFont(font3);
        exit_but->setStyleSheet(QString::fromUtf8("background-color:grey;\n"
"color:black;\n"
"border-radius:10px;"));
        male_radio = new QRadioButton(book_car);
        male_radio->setObjectName("male_radio");
        male_radio->setGeometry(QRect(270, 130, 91, 22));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Onyx")});
        font4.setPointSize(20);
        font4.setBold(true);
        male_radio->setFont(font4);
        male_radio->setStyleSheet(QString::fromUtf8("color:black"));
        female_radio = new QRadioButton(book_car);
        female_radio->setObjectName("female_radio");
        female_radio->setGeometry(QRect(270, 220, 91, 22));
        female_radio->setFont(font4);
        female_radio->setStyleSheet(QString::fromUtf8("color:black"));
        pick_lineedit = new QLineEdit(book_car);
        pick_lineedit->setObjectName("pick_lineedit");
        pick_lineedit->setGeometry(QRect(370, 120, 221, 41));
        pick_lineedit->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color:black;\n"
"border:2px solid grey;"));
        Pick_label = new QLabel(book_car);
        Pick_label->setObjectName("Pick_label");
        Pick_label->setGeometry(QRect(370, 60, 141, 71));
        Pick_label->setFont(font1);
        Pick_label->setStyleSheet(QString::fromUtf8("color:black;"));
        Dest_label = new QLabel(book_car);
        Dest_label->setObjectName("Dest_label");
        Dest_label->setGeometry(QRect(370, 160, 141, 71));
        Dest_label->setFont(font1);
        Dest_label->setStyleSheet(QString::fromUtf8("color:black;"));
        Dest_lineedit = new QLineEdit(book_car);
        Dest_lineedit->setObjectName("Dest_lineedit");
        Dest_lineedit->setGeometry(QRect(370, 220, 221, 41));
        Dest_lineedit->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color:black;\n"
"border:2px solid grey;"));
        Select_label = new QLabel(book_car);
        Select_label->setObjectName("Select_label");
        Select_label->setGeometry(QRect(10, 230, 111, 71));
        Select_label->setFont(font1);
        Select_label->setStyleSheet(QString::fromUtf8("color:black;"));
        listWidget = new QListWidget(book_car);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(20, 300, 256, 192));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Rockwell Condensed")});
        font5.setPointSize(16);
        listWidget->setFont(font5);

        retranslateUi(book_car);

        QMetaObject::connectSlotsByName(book_car);
    } // setupUi

    void retranslateUi(QDialog *book_car)
    {
        book_car->setWindowTitle(QCoreApplication::translate("book_car", "Dialog", nullptr));
        label->setText(QString());
        Book_car_title->setText(QCoreApplication::translate("book_car", "Book car", nullptr));
        Name_label->setText(QCoreApplication::translate("book_car", "Name", nullptr));
        book_but->setText(QCoreApplication::translate("book_car", "Book car", nullptr));
        Age_label->setText(QCoreApplication::translate("book_car", "Age", nullptr));
        exit_but->setText(QCoreApplication::translate("book_car", "Exit", nullptr));
        male_radio->setText(QCoreApplication::translate("book_car", "Male", nullptr));
        female_radio->setText(QCoreApplication::translate("book_car", "Female", nullptr));
        pick_lineedit->setText(QString());
        Pick_label->setText(QCoreApplication::translate("book_car", "Pickup point", nullptr));
        Dest_label->setText(QCoreApplication::translate("book_car", "Destination", nullptr));
        Dest_lineedit->setText(QString());
        Select_label->setText(QCoreApplication::translate("book_car", "Select Car", nullptr));
    } // retranslateUi

};

namespace Ui {
    class book_car: public Ui_book_car {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOK_CAR_H
