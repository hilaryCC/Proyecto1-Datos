#ifndef FABRICANTE_H
#define FABRICANTE_H

#include "FSentiThread.h"
#include "Bebes.h"
#include <cstdlib>
#include <iostream>
#include <QMutex>
#include <stdlib.h>

struct Fabricante{
    FactoryS * corazones;
    FactoryS * artes;
    FactoryS * maldades;
    QMutex * mTodo;

    colaBebe * colaBebes;
    QMutex * mBebes;
    colaMalos * malos;
    QMutex * mMalos;

    bool btn = false;

    Fabricante(colaBebe * buenos, colaMalos * _malos, QMutex * _mb, QMutex * _mm){
        colaBebes = buenos;
        malos = _malos;
        mBebes = _mb;
        mMalos = _mm;
    }
    void _init_(FactoryS * _corazones, FactoryS * _artes, FactoryS * _maldades, QMutex * todo){
        corazones = _corazones;
        artes = _artes;
        maldades = _maldades;
        mTodo = todo;
    }
    void createNew();
    Bebe * RandBaby(int a, int b, int c);
};

#endif // FABRICANTE_H

