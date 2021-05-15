#ifndef ALMACENMALOS_H
#define ALMACENMALOS_H

#endif // ALMACENMALOS_H
#include "FactoryS.h"

struct colaMalos{
    Nodo * frente;

    colaMalos(){
        frente = 0;
    }
    void encolar (int dato);
    Nodo* desencolar (void);
    Nodo* verFrente(void);
    bool vacia(void);
};
