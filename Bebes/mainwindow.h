#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "fabrica.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    Fabrica * fabrica;

private slots:
    void on_gStartBtn_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
