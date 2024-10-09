/********************************************************************************
** Form generated from reading UI file 'mainmenu.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINMENU_H
#define UI_MAINMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_MainMenu
{
public:
    QLabel *label;
    QPushButton *Add_Car_Button;
    QPushButton *Book_Car_Button;
    QPushButton *exit_but;

    void setupUi(QDialog *MainMenu)
    {
        if (MainMenu->objectName().isEmpty())
            MainMenu->setObjectName("MainMenu");
        MainMenu->resize(695, 542);
        label = new QLabel(MainMenu);
        label->setObjectName("label");
        label->setGeometry(QRect(0, 0, 701, 551));
        label->setPixmap(QPixmap(QString::fromUtf8("Imagine.png")));
        Add_Car_Button = new QPushButton(MainMenu);
        Add_Car_Button->setObjectName("Add_Car_Button");
        Add_Car_Button->setGeometry(QRect(0, 100, 111, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Ravie")});
        font.setPointSize(10);
        Add_Car_Button->setFont(font);
        Add_Car_Button->setStyleSheet(QString::fromUtf8("background-color:orange;\n"
"color:white;\n"
"border-radius:10px;"));
        Book_Car_Button = new QPushButton(MainMenu);
        Book_Car_Button->setObjectName("Book_Car_Button");
        Book_Car_Button->setGeometry(QRect(0, 150, 111, 41));
        Book_Car_Button->setFont(font);
        Book_Car_Button->setStyleSheet(QString::fromUtf8("background-color:blue;\n"
"color:white;\n"
"border-radius:10px;"));
        exit_but = new QPushButton(MainMenu);
        exit_but->setObjectName("exit_but");
        exit_but->setGeometry(QRect(10, 490, 101, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Ravie")});
        exit_but->setFont(font1);
        exit_but->setStyleSheet(QString::fromUtf8("background-color:grey;\n"
"color:black;\n"
"border-radius:10px;"));

        retranslateUi(MainMenu);

        QMetaObject::connectSlotsByName(MainMenu);
    } // setupUi

    void retranslateUi(QDialog *MainMenu)
    {
        MainMenu->setWindowTitle(QCoreApplication::translate("MainMenu", "Dialog", nullptr));
        label->setText(QString());
        Add_Car_Button->setText(QCoreApplication::translate("MainMenu", "Add Car", nullptr));
        Book_Car_Button->setText(QCoreApplication::translate("MainMenu", "Book Car", nullptr));
        exit_but->setText(QCoreApplication::translate("MainMenu", "Exit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainMenu: public Ui_MainMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINMENU_H
