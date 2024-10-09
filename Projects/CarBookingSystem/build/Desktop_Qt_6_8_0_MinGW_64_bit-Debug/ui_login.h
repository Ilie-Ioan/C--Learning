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
    QLabel *loginTitle;
    QLabel *user_id_label;
    QLabel *password_label;
    QLineEdit *user_id_lineedit;
    QPushButton *exit_but;
    QPushButton *login_but;
    QLineEdit *password_line_edit;

    void setupUi(QMainWindow *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName("login");
        login->resize(800, 600);
        centralwidget = new QWidget(login);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(-2, -5, 801, 611));
        label->setPixmap(QPixmap(QString::fromUtf8("Imagine.jpg")));
        loginTitle = new QLabel(centralwidget);
        loginTitle->setObjectName("loginTitle");
        loginTitle->setGeometry(QRect(240, 30, 361, 71));
        QFont font;
        font.setFamilies({QString::fromUtf8("Rockwell")});
        font.setPointSize(26);
        loginTitle->setFont(font);
        loginTitle->setStyleSheet(QString::fromUtf8("color:white;"));
        user_id_label = new QLabel(centralwidget);
        user_id_label->setObjectName("user_id_label");
        user_id_label->setGeometry(QRect(410, 180, 361, 71));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Rockwell")});
        font1.setPointSize(16);
        user_id_label->setFont(font1);
        user_id_label->setStyleSheet(QString::fromUtf8("color:white;"));
        password_label = new QLabel(centralwidget);
        password_label->setObjectName("password_label");
        password_label->setGeometry(QRect(410, 260, 361, 71));
        password_label->setFont(font1);
        password_label->setStyleSheet(QString::fromUtf8("color:white;"));
        user_id_lineedit = new QLineEdit(centralwidget);
        user_id_lineedit->setObjectName("user_id_lineedit");
        user_id_lineedit->setGeometry(QRect(552, 193, 241, 41));
        user_id_lineedit->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"border:2px solid grey;"));
        exit_but = new QPushButton(centralwidget);
        exit_but->setObjectName("exit_but");
        exit_but->setGeometry(QRect(410, 353, 101, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Ravie")});
        exit_but->setFont(font2);
        exit_but->setStyleSheet(QString::fromUtf8("background-color:grey;\n"
"color:black;\n"
"border-radius:10px;"));
        login_but = new QPushButton(centralwidget);
        login_but->setObjectName("login_but");
        login_but->setGeometry(QRect(600, 350, 111, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Ravie")});
        font3.setPointSize(10);
        login_but->setFont(font3);
        login_but->setStyleSheet(QString::fromUtf8("background-color:green;\n"
"color:black;\n"
"border-radius:10px;"));
        password_line_edit = new QLineEdit(centralwidget);
        password_line_edit->setObjectName("password_line_edit");
        password_line_edit->setGeometry(QRect(560, 280, 231, 41));
        password_line_edit->setStyleSheet(QString::fromUtf8("background-color:transparent;\n"
"border:2px solid grey;"));
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
