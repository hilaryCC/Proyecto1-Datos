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
struct colaMalos;

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
    int moreno;
    int afro;
    int rubio;
    int casta;
    int peli;
    int pink;
    int badB;
    int pitufo;
    int total;

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
    void setCapacidad(int dato);
    void addCont(string tipo);
};

struct colaMalos{
    nodoBebe * frente;
    int contFab;
    int contSup;

    colaMalos(){
        frente = 0;
        contFab = 0;
        contSup = 0;
    }

    void encolar (nodoBebe * nuevo);
    nodoBebe * desencolar (void);
    nodoBebe * verFrente(void);
    bool vacia(void);
    int largo();
    bool llena();
};

#endif // BEBESFABRICADOS_H


