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

    void on_corHistBtn_clicked();

    void on_fabriTBtn_clicked();

    void on_corTBtn_clicked();

    void on_segsCor_valueChanged(int arg1);

    void on_tamCor_valueChanged(int arg1);

    void on_artHisBtn_clicked();

    void on_artTBtn_clicked();

    void on_segsArt_valueChanged(int arg1);

    void on_tamArt_valueChanged(int arg1);

    void on_malHistBtn_clicked();

    void on_malTBtn_clicked();

    void on_segsMal_valueChanged(int arg1);

    void on_tamMal_valueChanged(int arg1);

    void on_segsFabricante_valueChanged(int arg1);

    void on_malosHistBtn_clicked();

    void on_bebesHistBtn_clicked();

    void on_tamBb_valueChanged(int arg1);

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
