#ifndef FSENTITHREAD_H
#define FSENTITHREAD_H

#include "FabricaSentimientos.h"
#include <QThread>


class FactorySThread : public QThread
{
public:
    char tipo;
    FactoryS * fabrica;
    int tiempo;
    bool running;
    bool pause;
    FactorySThread(){}

    void _init_(char _tipo, QMutex * _mutexCola){
        tipo = _tipo;
        fabrica = new FactoryS(_mutexCola, _tipo);
        running = true;
        pause = false;
        tiempo = 2;
    }

    void run();
    void pausar();

};

#endif // FSENTITHREAD_H
