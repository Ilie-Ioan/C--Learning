#include "login.h"
#include "ui_login.h"
#include <QPixmap>
#include "QMessageBox"

login::login(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::login)
{
    ui->setupUi(this);
    ui->label->setPixmap(QPixmap("C:/Users/ionut/Documents/GitHub/C--Learning/Projects/CarBookingSystem/Imagine.png"));
}

login::~login()
{
    delete ui;
}

void login::on_exit_but_clicked()
{
    QApplication::exit();
}


void login::on_login_but_clicked()
{
    QString userid = ui->user_id_lineedit->text();
    QString passwordid = ui->password_line_edit->text();
    if(userid =="admin")
    {
        if(passwordid=="admin")
        {
            qDebug() <<"Login succesfull";
            //call the MainMenu
            MainMenuUi.show();
            login::close();
        }
        else
        {
           QMessageBox::information(0,"Authentification","Wrong Password !!!");

        }
    }
    else QMessageBox::information(0,"login failed","Failed !!!");

}

