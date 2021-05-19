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
    FactorySThread * arte;
    QMutex * mArt;
    FactorySThread * maldad;
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

        arte = new FactorySThread();
        mArt = new QMutex();
        arte->_init_('A', mArt);

        maldad = new FactorySThread();
        mMal = new QMutex();
        maldad->_init_('E', mMal);
    }

    void createNew();
    Bebe * RandBaby(int a, int b, int c);
};

#endif // FABRICANTE_H

