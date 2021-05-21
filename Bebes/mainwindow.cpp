#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    fabrica = new Fabrica();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_gStartBtn_clicked()
{
    ui->gStartBtn->setEnabled(false);
    fabrica->startAll();
}
