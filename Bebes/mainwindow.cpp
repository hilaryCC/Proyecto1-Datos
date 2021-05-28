#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QApplication>
#include <QMessageBox>
#include <QDebug>
#include <QPixmap>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pix("C:/Users/oscar/Desktop/andres tec/Semestre lll 2021/ED/Proyecto1/Proyecto1-Datos/fondo.png");
    ui->Fondo->setPixmap(pix);
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

//----------------------Fabrica de corazones---------------------------------
//---------------------------------------------------------------------------
void MainWindow::on_corHistBtn_clicked()
{
    if(fabrica->iniciado){
        string info = "";
        fabrica->mSentis->lock();
        info = info + "Llenos: " + to_string(fabrica->corazones->fabrica->llenos) + "\nVacios: " + to_string(fabrica->corazones->fabrica->vacios);
        info = info + "\nRotos: " + to_string(fabrica->corazones->fabrica->rotos);
        info = info + "\nTotal: " + to_string(fabrica->corazones->fabrica->total) + "\nActuales: " + to_string(fabrica->corazones->fabrica->cola->largo());
        info = info + " de " + to_string(fabrica->corazones->fabrica->cola->max) + "\nCada " + to_string(fabrica->corazones->tiempo) + " segundos";
        fabrica->mSentis->unlock();

        QMessageBox::information(this, "Corazones", info.c_str());
    }
    else{
        QMessageBox::information(this, "Corazones", "Informacion no disponible");
    }
}
void MainWindow::on_corTBtn_clicked()
{
    fabrica->corazones->fabrica->btn = !fabrica->corazones->fabrica->btn;
    fabrica->corazones->pausar();
}


void MainWindow::on_segsCor_valueChanged(int arg1)
{
    fabrica->corazones->tiempo = arg1;
}


void MainWindow::on_tamCor_valueChanged(int arg1)
{
    fabrica->corazones->fabrica->cola->max = arg1;
}

//---------------------------Fabrica de arte---------------------------------
//---------------------------------------------------------------------------
void MainWindow::on_artHisBtn_clicked()
{
    if(fabrica->iniciado){
        string info = "";
        fabrica->mSentis->lock();
        info = info + "Llenos: " + to_string(fabrica->arte->fabrica->llenos) + "\nVacios: " + to_string(fabrica->arte->fabrica->vacios);
        info = info + "\nTotal: " + to_string(fabrica->arte->fabrica->total) + "\nActuales: " + to_string(fabrica->arte->fabrica->cola->largo());
        info = info + " de " + to_string(fabrica->arte->fabrica->cola->max)+ "\nCada " + to_string(fabrica->arte->tiempo) + " segundos";
        fabrica->mSentis->unlock();

        QMessageBox::information(this, "Arte", info.c_str());
    }
    else{
        QMessageBox::information(this, "Arte", "Informacion no disponible");
    }
}

void MainWindow::on_artTBtn_clicked()
{
    fabrica->arte->fabrica->btn = !fabrica->arte->fabrica->btn;
    fabrica->arte->pausar();
}

void MainWindow::on_segsArt_valueChanged(int arg1)
{
    fabrica->arte->tiempo = arg1;
}

void MainWindow::on_tamArt_valueChanged(int arg1)
{
    fabrica->arte->fabrica->cola->max = arg1;
}

//--------------------------Fabrica de maldad--------------------------------
//---------------------------------------------------------------------------
void MainWindow::on_malHistBtn_clicked()
{
    if(fabrica->iniciado){
        string info = "";
        fabrica->mSentis->lock();
        info = info + "Llenos: " + to_string(fabrica->maldad->fabrica->llenos) + "\nVacios: " + to_string(fabrica->maldad->fabrica->vacios);
        info = info + "\nTotal: " + to_string(fabrica->maldad->fabrica->total) + "\nActuales: " + to_string(fabrica->maldad->fabrica->cola->largo());
        info = info + " de " + to_string(fabrica->maldad->fabrica->cola->max) + "\nCada " + to_string(fabrica->maldad->tiempo) + " segundos";
        fabrica->mSentis->unlock();

        QMessageBox::information(this, "Maldad", info.c_str());
    }
    else{
        QMessageBox::information(this, "Maldad", "Informacion no disponible");
    }
}


void MainWindow::on_malTBtn_clicked()
{
    fabrica->maldad->fabrica->btn = !fabrica->maldad->fabrica->btn;
    fabrica->maldad->pausar();
}



void MainWindow::on_segsMal_valueChanged(int arg1)
{
    fabrica->maldad->tiempo = arg1;
}

void MainWindow::on_tamMal_valueChanged(int arg1)
{
    fabrica->maldad->fabrica->cola->max = arg1;
}

//----------------------Fabricante de bebes----------------------------------
//---------------------------------------------------------------------------
void MainWindow::on_fabriTBtn_clicked()
{
    fabrica->fabricante->fabricante->btn = !fabrica->fabricante->fabricante->btn;
    fabrica->fabricante->pausar();
}


void MainWindow::on_segsFabricante_valueChanged(int arg1)
{
    fabrica->fabricante->tiempo = arg1;
}

//----------------------Cola de bebes malos----------------------------------
//---------------------------------------------------------------------------

void MainWindow::on_malosHistBtn_clicked()
{
    if(fabrica->iniciado){
        string info = "";
        fabrica->mutexCM->lock();
        info = info + "De la fabrica: " + to_string(fabrica->colaMalos->contFab) + "\nDe supervisores: " + to_string(fabrica->colaMalos->contSup);
        info = info + "\nTotal: " + to_string(fabrica->colaMalos->total);
        fabrica->mutexCM->unlock();

        QMessageBox::information(this, "Malos", info.c_str());
    }
    else{
        QMessageBox::information(this, "Malos", "Informacion no disponible");
    }
}

//----------------------Cola de bebes buenos---------------------------------
//---------------------------------------------------------------------------
void MainWindow::on_bebesHistBtn_clicked()
{
    if(fabrica->iniciado){
        string info = "";
        fabrica->mutexCB->lock();
        info = info + "Morenos: " + to_string(fabrica->colaBebes->moreno);
        info = info + "\nAfros: " + to_string(fabrica->colaBebes->afro);
        info = info + "\nRubios: " + to_string(fabrica->colaBebes->rubio);
        info = info + "\nCastaño: " + to_string(fabrica->colaBebes->casta);
        info = info + "\nPelirrojo: " + to_string(fabrica->colaBebes->peli);
        info = info + "\nPink: " + to_string(fabrica->colaBebes->pink);
        info = info + "\nBad Bunny: " + to_string(fabrica->colaBebes->badB);
        info = info + "\nPitufo: " + to_string(fabrica->colaBebes->pitufo);
        info = info + "\nTotal: " + to_string(fabrica->colaBebes->total);
        info = info + "\nActuales: " + to_string(fabrica->colaBebes->largo()) + " de " + to_string(fabrica->colaBebes->capacidad);
        fabrica->mutexCB->unlock();

        QMessageBox::information(this, "Bebes", info.c_str());
    }
    else{
        QMessageBox::information(this, "Bebes", "Informacion no disponible");
    }
}

void MainWindow::on_tamBb_valueChanged(int arg1)
{
    fabrica->colaBebes->capacidad = arg1;
}

//--------------------------Horno--------------------------------------------
//---------------------------------------------------------------------------

void MainWindow::on_HornHisBtn_clicked()
{
    if(fabrica->iniciado){
        string info = "";
        fabrica->mutexCB->lock();
        info = info + "Horneando: ";
        info = info + "\nAfros: " + to_string(fabrica->colaHorno->verFrente()->bebe->afro);
        info = info + "\nRubios: " + to_string(fabrica->colaHorno->verFrente()->bebe->rubio);
        info = info + "\nCastaño: " + to_string(fabrica->colaHorno->verFrente()->bebe->casta);
        info = info + "\nPelirrojo: " + to_string(fabrica->colaHorno->verFrente()->bebe->peli);
        info = info + "\nPink: " + to_string(fabrica->colaHorno->verFrente()->bebe->pink);
        info = info + "\nBad Bunny: " + to_string(fabrica->colaHorno->verFrente()->bebe->badB);
        info = info + "\nPitufo: " + to_string(fabrica->colaHorno->verFrente()->bebe->pitufo);
        info = info + "\nHorneados: ";
        info = info + "\nAfros: " + to_string(fabrica->colaHorneados->verFrente()->bebe->afro);
        info = info + "\nRubios: " + to_string(fabrica->colaHorneados->verFrente()->bebe->rubio);
        info = info + "\nCastaño: " + to_string(fabrica->colaHorneados->verFrente()->bebe->casta);
        info = info + "\nPelirrojo: " + to_string(fabrica->colaHorneados->verFrente()->bebe->peli);
        info = info + "\nPink: " + to_string(fabrica->colaHorneados->verFrente()->bebe->pink);
        info = info + "\nBad Bunny: " + to_string(fabrica->colaHorneados->verFrente()->bebe->badB);
        info = info + "\nPitufo: " + to_string(fabrica->colaHorneados->verFrente()->bebe->pitufo);
        fabrica->mutexCB->unlock();

        QMessageBox::information(this, "Horno", info.c_str());
    }
    else{
        QMessageBox::information(this, "Horno", "Informacion no disponible");
    }
}
