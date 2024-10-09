#include "mainmenu.h"
#include "ui_mainmenu.h"

MainMenu::MainMenu(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::MainMenu)
{
    ui->setupUi(this);
     ui->label->setPixmap(QPixmap("C:/Users/ionut/Documents/GitHub/C--Learning/Projects/CarBookingSystem/Imagine.png"));
}

MainMenu::~MainMenu()
{
    delete ui;
}

void MainMenu::on_Add_Car_Button_clicked()
{
    addcarUI.show();
    MainMenu::hide();
}


void MainMenu::on_Book_Car_Button_clicked()
{
    bookcarUI.show();
    MainMenu::hide();
}


void MainMenu::on_exit_but_clicked()
{
    QApplication::exit();
}

