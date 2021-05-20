#ifndef FABRICANTE_H
#define FABRICANTE_H

#include "FSentiThread.h"
#include "Bebes.h"
#include <cstdlib>
#include <iostream>
#include <QMutex>
#include <stdlib.h>

struct Fabricante{
    FactorySThread * corazones;
    QMutex * mCor;
    FactorySThread * artes;
    QMutex * mArt;
    FactorySThread * maldades;
    QMutex * mMal;

    colaBebe * colaBebes;
    QMutex * mBebes;
    colaBebe * malos;

    Fabricante(colaBebe * buenos, colaBebe * _malos){
        colaBebes = buenos;
        malos = _malos;
        corazones = new FactorySThread();
        mCor = new QMutex();
        corazones->_init_('L', mCor);

        artes = new FactorySThread();
        mArt = new QMutex();
        artes->_init_('A', mArt);

        maldades = new FactorySThread();
        mMal = new QMutex();
        maldades->_init_('E', mMal);
    }

    void createNew();
    Bebe * RandBaby(int a, int b, int c);
};

#endif // FABRICANTE_H

