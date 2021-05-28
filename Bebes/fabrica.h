#ifndef FABRICA_H
#define FABRICA_H


#include "fabricantethread.h"
#include "Bebes.h"
#include "Horno.h"

struct Fabrica{
    bool iniciado = false;

    FabricanteThread * fabricante;
    FactorySThread * corazones;
    FactorySThread * arte;
    FactorySThread * maldad;
    QMutex * mSentis;

    colaBebe * colaBebes;
    colaMalos * colaMalos;
    colaHorno * colaHorno;
    colaSupervisores * colaHorneados;
    colaSupervisores * supervisados;

    QMutex * mutexCB;
    QMutex * mutexCM;

    Fabrica(){
    }
    void startAll();
    void pauseAll();
    void stopAll();

};

#endif // FABRICA_H
