#ifndef ADDCAR_H
#define ADDCAR_H

#include <QDialog>

namespace Ui {
class addcar;
}

class addcar : public QDialog
{
    Q_OBJECT

public:
    explicit addcar(QWidget *parent = nullptr);
    ~addcar();

private slots:
    void on_add_but_clicked();

    void on_exit_but_clicked();

private:
    Ui::addcar *ui;
};

#endif // ADDCAR_H
