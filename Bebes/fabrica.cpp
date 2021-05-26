#include "fabrica.h"



void Fabrica::startAll(){
    iniciado = true;

    colaBebes = new colaBebe(25);
    mutexCB = new QMutex();
    colaMalos = new struct colaMalos();
    mutexCM = new QMutex();

    corazones = new FactorySThread();
    mSentis = new QMutex();
    corazones->_init_('L', mSentis);
    arte = new FactorySThread();
    arte->_init_('A', mSentis);
    maldad = new FactorySThread();
    maldad->_init_('E', mSentis);

    fabricante = new FabricanteThread();
    fabricante->_init_(mutexCB, colaBebes, colaMalos, mutexCM);
    fabricante->fabricante->_init_(corazones->fabrica, arte->fabrica, maldad->fabrica, mSentis);

    corazones->start();
    arte->start();
    maldad->start();
    fabricante->start();
}
