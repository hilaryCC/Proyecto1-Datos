#ifndef FABRICA_H
#define FABRICA_H


#include "fabricantethread.h"
#include "Bebes.h"

struct Fabrica{
    bool iniciado = false;

    FabricanteThread * fabricante;
    FactorySThread * corazones;
    FactorySThread * arte;
    FactorySThread * maldad;
    QMutex * mSentis;

    colaBebe * colaBebes;
    colaMalos * colaMalos;
    QMutex * mutexCB;
    QMutex * mutexCM;

    Fabrica(){
    }
    void startAll();
    void pauseAll();
    void stopAll();

};

#endif // FABRICA_H
