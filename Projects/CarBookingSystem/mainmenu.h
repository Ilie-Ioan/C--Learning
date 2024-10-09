#ifndef MAINMENU_H
#define MAINMENU_H

#include <QDialog>
#include "addcar.h"
#include "book_car.h"

namespace Ui {
class MainMenu;
}

class MainMenu : public QDialog
{
    Q_OBJECT

public:
    explicit MainMenu(QWidget *parent = nullptr);
    ~MainMenu();

private slots:
    void on_Add_Car_Button_clicked();

    void on_Book_Car_Button_clicked();

    void on_exit_but_clicked();

private:
    Ui::MainMenu *ui;
    addcar addcarUI;
    book_car bookcarUI;
};

#endif // MAINMENU_H
