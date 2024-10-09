#include "addcar.h"
#include "ui_addcar.h"
#include "QFile"
#include "QTextStream"
#include "QDebug"


addcar::addcar(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::addcar)
{
    ui->setupUi(this);
    ui->car_type_listwidget->addItem("Mini");
    ui->car_type_listwidget->addItem("Sedan");
    ui->car_type_listwidget->addItem("SUV");
    ui->car_type_listwidget->addItem("Premium");
    ui->label->setPixmap(QPixmap("C:/Users/ionut/Documents/GitHub/C--Learning/Projects/CarBookingSystem/Imagine.png"));

}

addcar::~addcar()
{
    delete ui;
}

void addcar::on_add_but_clicked()
{
    QVector<QString> carData; //
    /*
     * 0 = Car Number
     * 1 = Brand
     * 2 = Fare
     * 3 = Car Type
     */

    carData.append(ui->car_number_lineedit->text());
    carData.append(ui->brand_lineedit->text());
    carData.append(ui->fare_line_edit->text());

   QListWidgetItem *selectCarType = ui->car_type_listwidget->currentItem();

    if (selectCarType == nullptr) {
        ui->car_type_listwidget->setCurrentRow(0);  // Selectăm implicit primul element
        selectCarType = ui->car_type_listwidget->currentItem();  // Obținem din nou elementul selectat
    }

    if (selectCarType != nullptr) {
        carData.append(selectCarType->text());  // Adăugăm tipul mașinii selectate în QVector
    } else {
        qDebug() << "No car type selected!";
        return;  // Dacă nu este selectat nimic, oprește execuția
    }

    //store car data into a file

    QFile file("carData.txt");

    if(file.open(QIODevice::Append | QIODevice::Text))
    {
        QTextStream stream(&file);
        for(int i=0;i<carData.size();i++)
        {
            stream << carData[i]<<" ";
        }
        stream<<"\n";
    }
    file.close();
    qDebug() << "Data written into file sucesfully";

}


void addcar::on_exit_but_clicked()
{
    QApplication::exit();

}

