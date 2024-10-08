#ifndef MAINWINDOW_H
#define MAINWINDOW_H

// this header will provide the class - which provide all the necessary widgets and toolkits
// to create GUI application
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);

    ~MainWindow();

private slots:
    void on_msg_Button_clicked();

private:
    Ui::MainWindow *ui; // it will be used to access widget elements
};
#endif // MAINWINDOW_H
