#ifndef TIMEMAINWINDOW_H
#define TIMEMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class TimeMainWindow;
}

class TimeMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit TimeMainWindow(QWidget *parent = 0);
    ~TimeMainWindow();

private:
    Ui::TimeMainWindow *ui;
};

#endif // TIMEMAINWINDOW_H
