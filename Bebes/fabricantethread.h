#ifndef FABRICANTETHREAD_H
#define FABRICANTETHREAD_H
#include <QThread>
#include <QMutex>
#include "Fabricante.h"

class FabricanteThread : public QThread
{
public:
    Fabricante * fabricante;
    int tiempo;
    bool running;
    bool pause;
    FabricanteThread(){}

    void _init_(QMutex * buenos, colaBebe * bebes, colaMalos * malos, QMutex * mMalos){
        fabricante = new Fabricante(bebes, malos, buenos, mMalos);
        running = true;
        pause = false;
        tiempo = 2;
    }

    void run();
    void pausar();

};

#endif // FABRICANTETHREAD_H
