#ifndef WIDGET_H
#define WIDGET_H

#include "mainwindow.h"
#include "sqlheders.h"


namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_exitbutton_clicked();

    void on_checkBox_toggled(bool checked);

    void on_loginbutton_clicked();

private:
    Ui::Widget *ui;
    QSqlDatabase db;
    MainWindow *form2;
};

#endif // WIDGET_H