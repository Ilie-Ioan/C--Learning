/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLineEdit *user_id_lineedit;
    QLabel *loginTitle;
    QLineEdit *password_line_edit;
    QLabel *user_id_label;
    QLabel *password_label;
    QPushButton *exit_but;
    QPushButton *login_but;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName("login");
        login->resize(730, 581);
        centralwidget = new QWidget(login);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(0, -20, 801, 611));
        label->setPixmap(QPixmap(QString::fromUtf8("Imagine.jpg")));
        user_id_lineedit = new QLineEdit(centralwidget);
        user_id_lineedit->setObjectName("user_id_lineedit");
        user_id_lineedit->setGeometry(QRect(150, 170, 241, 41));
        user_id_lineedit->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color:black;\n"
"border:2px solid grey;"));
        loginTitle = new QLabel(centralwidget);
        loginTitle->setObjectName("loginTitle");
        loginTitle->setGeometry(QRect(70, 10, 361, 71));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell")});
        font.setPointSize(26);
        loginTitle->setFont(font);
        loginTitle->setStyleSheet(QString::fromUtf8("color:black;"));
        password_line_edit = new QLineEdit(centralwidget);
        password_line_edit->setObjectName("password_line_edit");
        password_line_edit->setGeometry(QRect(150, 240, 231, 41));
        QFont font1;
        font1.setBold(false);
        password_line_edit->setFont(font1);
        password_line_edit->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"color:black;\n"
"border:2px solid grey;"));
        password_line_edit->setEchoMode(QLineEdit::EchoMode::Password);
        user_id_label = new QLabel(centralwidget);
        user_id_label->setObjectName("user_id_label");
        user_id_label->setGeometry(QRect(8, 157, 361, 71));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Rockwell")});
        font2.setPointSize(16);
        user_id_label->setFont(font2);
        user_id_label->setStyleSheet(QString::fromUtf8("color:black;"));
        password_label = new QLabel(centralwidget);
        password_label->setObjectName("password_label");
        password_label->setGeometry(QRect(0, 220, 361, 71));
        password_label->setFont(font2);
        password_label->setStyleSheet(QString::fromUtf8("color:black;"));
        exit_but = new QPushButton(centralwidget);
        exit_but->setObjectName("exit_but");
        exit_but->setGeometry(QRect(30, 480, 101, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Ravie")});
        exit_but->setFont(font3);
        exit_but->setStyleSheet(QString::fromUtf8("background-color:grey;\n"
"color:black;\n"
"border-radius:10px;"));
        login_but = new QPushButton(centralwidget);
        login_but->setObjectName("login_but");
        login_but->setGeometry(QRect(180, 480, 111, 41));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Ravie")});
        font4.setPointSize(10);
        login_but->setFont(font4);
        login_but->setStyleSheet(QString::fromUtf8("background-color:green;\n"
"color:black;\n"
"border-radius:10px;"));
        login->setCentralWidget(centralwidget);

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QMainWindow *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "login", nullptr));
        label->setText(QString());
        loginTitle->setText(QCoreApplication::translate("login", "Car Booking", nullptr));
        user_id_label->setText(QCoreApplication::translate("login", "User Id", nullptr));
        password_label->setText(QCoreApplication::translate("login", "Password", nullptr));
        exit_but->setText(QCoreApplication::translate("login", "Exit", nullptr));
        login_but->setText(QCoreApplication::translate("login", "Login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
