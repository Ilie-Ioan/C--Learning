#include "book_car.h"
#include "ui_book_car.h"
#include "QFile"
#include "QTextStream"
#include "QDebug"
#include "QMessageBox"

QVector<QString> getAlltheCarDetails();
book_car::book_car(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::book_car)
{
    ui->setupUi(this);
    QVector<QString>carData = getAlltheCarDetails();
    ui->label->setPixmap(QPixmap("C:/Users/ionut/Documents/GitHub/C--Learning/Projects/CarBookingSystem/Imagine.png"));

    for(int i=0;i<carData.size();i++)
    {
        ui->listWidget->addItem(carData[i]);
    }
}

book_car::~book_car()
{
    delete ui;
}

void book_car::on_book_but_clicked()
{
    QVector<QString> bookCarDetails;
    bookCarDetails.append(ui->name_lineedit->text());
    bookCarDetails.append(ui->age_lineedit->text());
    bookCarDetails.append(ui->pick_lineedit->text());
    bookCarDetails.append(ui->Dest_lineedit->text());

    bool male = ui->male_radio->isChecked();
    bool female = ui->female_radio->isChecked();
    if(male)
    {
        bookCarDetails.append("male");
    }
    else
    {
        bookCarDetails.append("female");
    }
    QListWidgetItem *selectedCar = ui->listWidget->currentItem();
    QString selectedCarDetails = selectedCar->text();

    bookCarDetails.append(selectedCarDetails);

    QFile file("bookCarData.txt");

    if(file.open(QIODevice::Append | QIODevice::Text))
    {
        QTextStream stream(&file);
        for(int i=0;i<bookCarDetails.size();i++)
        {
            stream << bookCarDetails[i]<<" ";
        }
        stream<<"\n";
    }
    file.close();

    QMessageBox::information(0,"booking status","Booking sucessfull");

    QModelIndex currentIndex = ui->listWidget->currentIndex();
    int currentRow = currentIndex.row();

    QVector<QString> allcarData = getAlltheCarDetails();

    allcarData.remove(currentRow);


    QFile file2("carData.txt");

    if(file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QTextStream stream(&file);
        for(int i=0;i<allcarData.size();i++)
        {
            stream << allcarData[i]<<" ";
        }
        stream<<"\n";
    }
    file2.close();

    QMessageBox::information(0,"booking status","Booking sucessfull");



}
QVector<QString> getAlltheCarDetails()
{
    QVector<QString> getData;
    QFile file("carData.txt");

    if(file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream in(&file);

        while(!in.atEnd())
        {
            QString line = in.readLine();
            getData.append(line);
            qDebug() << line;
        }
    }
    file.close();

    return getData;

}


void book_car::on_exit_but_clicked()
{
    QApplication::exit();
}

