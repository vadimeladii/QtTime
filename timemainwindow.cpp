#include "timemainwindow.h"
#include "ui_timemainwindow.h"
#include <QTime>

TimeMainWindow::TimeMainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::TimeMainWindow)
{
    ui->setupUi(this);
    QObject::connect(&time,SIGNAL(timeout()),this,SLOT(timeFunctie()));
    time.start(1000);
}

TimeMainWindow::~TimeMainWindow()
{
    delete ui;
}
void TimeMainWindow::timeFunctie(){

    QTime TimeCurent= QTime::currentTime();

    QString hhstring = TimeCurent.toString("hh");
    QString mmstring = TimeCurent.toString("mm");
    QString ssstring = TimeCurent.toString("ss");

    ui->label_3->setText(hhstring+":");
    ui->label_4->setText(mmstring+":");
    ui->label_5->setText(ssstring);
    switch (ssstring.toInt()%10) {
    case 9:
        ui->toolButton_17->setIcon(QIcon(":/1"));
        ui->toolButton_19->setIcon(QIcon(":/0"));
        ui->toolButton_21->setIcon(QIcon(":/0"));
        ui->toolButton_23->setIcon(QIcon(":/1"));
        break;
    case 8:
        ui->toolButton_17->setIcon(QIcon(":/1"));
        ui->toolButton_19->setIcon(QIcon(":/0"));
        ui->toolButton_21->setIcon(QIcon(":/0"));
        ui->toolButton_23->setIcon(QIcon(":/0"));
        break;
    case 7:
        ui->toolButton_17->setIcon(QIcon(":/0"));
        ui->toolButton_19->setIcon(QIcon(":/1"));
        ui->toolButton_21->setIcon(QIcon(":/1"));
        ui->toolButton_23->setIcon(QIcon(":/1"));
        break;
    case 6:
        ui->toolButton_17->setIcon(QIcon(":/0"));
        ui->toolButton_19->setIcon(QIcon(":/1"));
        ui->toolButton_21->setIcon(QIcon(":/1"));
        ui->toolButton_23->setIcon(QIcon(":/0"));
        break;
    case 5:
        ui->toolButton_17->setIcon(QIcon(":/0"));
        ui->toolButton_19->setIcon(QIcon(":/1"));
        ui->toolButton_21->setIcon(QIcon(":/0"));
        ui->toolButton_23->setIcon(QIcon(":/1"));
        break;
    case 4:
        ui->toolButton_17->setIcon(QIcon(":/0"));
        ui->toolButton_19->setIcon(QIcon(":/1"));
        ui->toolButton_21->setIcon(QIcon(":/0"));
        ui->toolButton_23->setIcon(QIcon(":/0"));
        break;
    case 3:
        ui->toolButton_17->setIcon(QIcon(":/0"));
        ui->toolButton_19->setIcon(QIcon(":/0"));
        ui->toolButton_21->setIcon(QIcon(":/1"));
        ui->toolButton_23->setIcon(QIcon(":/1"));
        break;
    case 2:
        ui->toolButton_17->setIcon(QIcon(":/0"));
        ui->toolButton_19->setIcon(QIcon(":/0"));
        ui->toolButton_21->setIcon(QIcon(":/1"));
        ui->toolButton_23->setIcon(QIcon(":/0"));
        break;
    case 1:
        ui->toolButton_17->setIcon(QIcon(":/0"));
        ui->toolButton_19->setIcon(QIcon(":/0"));
        ui->toolButton_21->setIcon(QIcon(":/0"));
        ui->toolButton_23->setIcon(QIcon(":/1"));
        break;
    case 0:
        ui->toolButton_17->setIcon(QIcon(":/0"));
        ui->toolButton_19->setIcon(QIcon(":/0"));
        ui->toolButton_21->setIcon(QIcon(":/0"));
        ui->toolButton_23->setIcon(QIcon(":/0"));
        break;
    }
    switch (ssstring.toInt()/10) {
    case 5:
        ui->toolButton_18->setIcon(QIcon(":/1"));
        ui->toolButton_20->setIcon(QIcon(":/0"));
        ui->toolButton_22->setIcon(QIcon(":/1"));
        break;
    case 4:
        ui->toolButton_18->setIcon(QIcon(":/1"));
        ui->toolButton_20->setIcon(QIcon(":/0"));
        ui->toolButton_22->setIcon(QIcon(":/0"));
        break;
    case 3:
        ui->toolButton_18->setIcon(QIcon(":/0"));
        ui->toolButton_21->setIcon(QIcon(":/1"));
        ui->toolButton_22->setIcon(QIcon(":/1"));
        break;
    case 2:
        ui->toolButton_18->setIcon(QIcon(":/0"));
        ui->toolButton_20->setIcon(QIcon(":/1"));
        ui->toolButton_22->setIcon(QIcon(":/0"));
        break;
    case 1:
        ui->toolButton_18->setIcon(QIcon(":/0"));
        ui->toolButton_20->setIcon(QIcon(":/0"));
        ui->toolButton_22->setIcon(QIcon(":/1"));
        break;
    case 0:
        ui->toolButton_18->setIcon(QIcon(":/0"));
        ui->toolButton_20->setIcon(QIcon(":/0"));
        ui->toolButton_22->setIcon(QIcon(":/0"));
        break;
}


    switch (mmstring.toInt()%10) {
    case 9:
        ui->toolButton_10->setIcon(QIcon(":/1"));
        ui->toolButton_12->setIcon(QIcon(":/0"));
        ui->toolButton_14->setIcon(QIcon(":/0"));
        ui->toolButton_16->setIcon(QIcon(":/1"));
        break;
    case 8:
        ui->toolButton_10->setIcon(QIcon(":/1"));
        ui->toolButton_12->setIcon(QIcon(":/0"));
        ui->toolButton_14->setIcon(QIcon(":/0"));
        ui->toolButton_16->setIcon(QIcon(":/0"));
        break;
    case 7:
        ui->toolButton_10->setIcon(QIcon(":/0"));
        ui->toolButton_12->setIcon(QIcon(":/1"));
        ui->toolButton_14->setIcon(QIcon(":/1"));
        ui->toolButton_16->setIcon(QIcon(":/1"));
        break;
    case 6:
        ui->toolButton_10->setIcon(QIcon(":/0"));
        ui->toolButton_12->setIcon(QIcon(":/1"));
        ui->toolButton_14->setIcon(QIcon(":/1"));
        ui->toolButton_16->setIcon(QIcon(":/0"));
        break;
    case 5:
        ui->toolButton_10->setIcon(QIcon(":/0"));
        ui->toolButton_12->setIcon(QIcon(":/1"));
        ui->toolButton_14->setIcon(QIcon(":/0"));
        ui->toolButton_16->setIcon(QIcon(":/1"));
        break;
    case 4:
        ui->toolButton_10->setIcon(QIcon(":/0"));
        ui->toolButton_12->setIcon(QIcon(":/1"));
        ui->toolButton_14->setIcon(QIcon(":/0"));
        ui->toolButton_16->setIcon(QIcon(":/0"));
        break;
    case 3:
        ui->toolButton_10->setIcon(QIcon(":/0"));
        ui->toolButton_12->setIcon(QIcon(":/0"));
        ui->toolButton_14->setIcon(QIcon(":/1"));
        ui->toolButton_16->setIcon(QIcon(":/1"));
        break;
    case 2:
        ui->toolButton_10->setIcon(QIcon(":/0"));
        ui->toolButton_12->setIcon(QIcon(":/0"));
        ui->toolButton_14->setIcon(QIcon(":/1"));
        ui->toolButton_16->setIcon(QIcon(":/0"));
        break;
    case 1:
        ui->toolButton_10->setIcon(QIcon(":/0"));
        ui->toolButton_12->setIcon(QIcon(":/0"));
        ui->toolButton_14->setIcon(QIcon(":/0"));
        ui->toolButton_16->setIcon(QIcon(":/1"));
        break;
    case 0:
        ui->toolButton_10->setIcon(QIcon(":/0"));
        ui->toolButton_12->setIcon(QIcon(":/0"));
        ui->toolButton_14->setIcon(QIcon(":/0"));
        ui->toolButton_16->setIcon(QIcon(":/0"));
        break;
    }
    switch (mmstring.toInt()/10) {
    case 5:
        ui->toolButton_11->setIcon(QIcon(":/1"));
        ui->toolButton_13->setIcon(QIcon(":/0"));
        ui->toolButton_15->setIcon(QIcon(":/1"));
        break;
    case 4:
        ui->toolButton_11->setIcon(QIcon(":/1"));
        ui->toolButton_13->setIcon(QIcon(":/0"));
        ui->toolButton_15->setIcon(QIcon(":/0"));
        break;
    case 3:
        ui->toolButton_11->setIcon(QIcon(":/0"));
        ui->toolButton_13->setIcon(QIcon(":/1"));
        ui->toolButton_15->setIcon(QIcon(":/1"));
        break;
    case 2:
        ui->toolButton_11->setIcon(QIcon(":/0"));
        ui->toolButton_13->setIcon(QIcon(":/1"));
        ui->toolButton_15->setIcon(QIcon(":/0"));
        break;
    case 1:
        ui->toolButton_11->setIcon(QIcon(":/0"));
        ui->toolButton_13->setIcon(QIcon(":/0"));
        ui->toolButton_15->setIcon(QIcon(":/1"));
        break;
    case 0:
        ui->toolButton_11->setIcon(QIcon(":/0"));
        ui->toolButton_13->setIcon(QIcon(":/0"));
        ui->toolButton_15->setIcon(QIcon(":/0"));
        break;

}
    switch (hhstring.toInt()%10) {
    case 9:
        ui->toolButton->setIcon(QIcon(":/1"));
        ui->toolButton_3->setIcon(QIcon(":/0"));
        ui->toolButton_5->setIcon(QIcon(":/0"));
        ui->toolButton_7->setIcon(QIcon(":/1"));
        break;
    case 8:
        ui->toolButton->setIcon(QIcon(":/1"));
        ui->toolButton_3->setIcon(QIcon(":/0"));
        ui->toolButton_5->setIcon(QIcon(":/0"));
        ui->toolButton_7->setIcon(QIcon(":/0"));
        break;
    case 7:
        ui->toolButton->setIcon(QIcon(":/0"));
        ui->toolButton_3->setIcon(QIcon(":/1"));
        ui->toolButton_5->setIcon(QIcon(":/1"));
        ui->toolButton_7->setIcon(QIcon(":/1"));
        break;
    case 6:
        ui->toolButton->setIcon(QIcon(":/0"));
        ui->toolButton_3->setIcon(QIcon(":/1"));
        ui->toolButton_5->setIcon(QIcon(":/1"));
        ui->toolButton_7->setIcon(QIcon(":/0"));
        break;
    case 5:
        ui->toolButton->setIcon(QIcon(":/0"));
        ui->toolButton_3->setIcon(QIcon(":/1"));
        ui->toolButton_5->setIcon(QIcon(":/0"));
        ui->toolButton_7->setIcon(QIcon(":/1"));
        break;
    case 4:
        ui->toolButton->setIcon(QIcon(":/0"));
        ui->toolButton_3->setIcon(QIcon(":/1"));
        ui->toolButton_5->setIcon(QIcon(":/0"));
        ui->toolButton_7->setIcon(QIcon(":/0"));
        break;
    case 3:
        ui->toolButton->setIcon(QIcon(":/0"));
        ui->toolButton_3->setIcon(QIcon(":/0"));
        ui->toolButton_5->setIcon(QIcon(":/1"));
        ui->toolButton_7->setIcon(QIcon(":/1"));
        break;
    case 2:
        ui->toolButton->setIcon(QIcon(":/0"));
        ui->toolButton_3->setIcon(QIcon(":/0"));
        ui->toolButton_5->setIcon(QIcon(":/1"));
        ui->toolButton_7->setIcon(QIcon(":/0"));
        break;
    case 1:
        ui->toolButton->setIcon(QIcon(":/0"));
        ui->toolButton_3->setIcon(QIcon(":/0"));
        ui->toolButton_5->setIcon(QIcon(":/0"));
        ui->toolButton_7->setIcon(QIcon(":/1"));
        break;
    case 0:
        ui->toolButton->setIcon(QIcon(":/0"));
        ui->toolButton_3->setIcon(QIcon(":/0"));
        ui->toolButton_5->setIcon(QIcon(":/0"));
        ui->toolButton_7->setIcon(QIcon(":/0"));
        break;
    }
    switch (hhstring.toInt()/10) {

    case 2:
        ui->toolButton_6->setIcon(QIcon(":/1"));
        ui->toolButton_8->setIcon(QIcon(":/0"));
        break;
    case 1:
        ui->toolButton_6->setIcon(QIcon(":/0"));
        ui->toolButton_8->setIcon(QIcon(":/1"));
        break;
    case 0:
        ui->toolButton_6->setIcon(QIcon(":/0"));
        ui->toolButton_8->setIcon(QIcon(":/0"));
        break;
    case 0:
        ui->toolButton_6->setIcon(QIcon(":/0"));
        ui->toolButton_8->setIcon(QIcon(":/0"));
        break;

}
}
