#include "timemainwindow.h"
#include "ui_timemainwindow.h"

TimeMainWindow::TimeMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TimeMainWindow)
{
    ui->setupUi(this);
}

TimeMainWindow::~TimeMainWindow()
{
    delete ui;
}
