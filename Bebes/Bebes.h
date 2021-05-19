#ifndef BEBESFABRICADOS_H
#define BEBESFABRICADOS_H

#include <cstdlib>
#include <iostream>
#include <QMutex>
#include <stdlib.h>
#include <string.h>
#include <QMutex>

using namespace std;

struct Bebes;
struct nodoBebe;
struct colaBebe;

struct Bebe{
    string tipo;
    Bebe(string _tipo){
        tipo = _tipo;
    }

};

struct nodoBebe{
    Bebe * bebe;
    nodoBebe * siguiente;

    nodoBebe(Bebe * _bebe){
        bebe = _bebe;
    }
};

struct colaBebe{
    nodoBebe * frente;
    int capacidad;
    QMutex * mutex;

    colaBebe(int _capacidad){
        frente = 0;
        capacidad = _capacidad;
    }

    void encolar (nodoBebe * nuevo);
    nodoBebe * desencolar (void);
    nodoBebe * verFrente(void);
    bool vacia(void);
    int largo();
    bool llena();
    int setCapacidad(int dato);
};

#endif // BEBESFABRICADOS_H


