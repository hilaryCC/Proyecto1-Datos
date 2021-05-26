#ifndef FABRICASENTIMIENTOS_H
#define FABRICASENTIMIENTOS_H

#endif // FABRICASENTIMIENTOS_H
#include <cstdlib>
#include <iostream>
#include <QMutex>
#include <stdlib.h>

using namespace std;
struct Sentimiento;
struct FactoryS;
struct NodoS;
struct ColaS;

struct Sentimiento{
    char tipo; //L = amor, A = arte, E = maldad
    int valor; //Relleno = 3, vacío = 2, roto = 1

    Sentimiento(char _tipo, int _valor){
        tipo = _tipo;
        valor = _valor;
    }
    Sentimiento(char _tipo){
        tipo = _tipo;
        valor = 3;
    }
};

struct NodoS{
    Sentimiento * sentimiento;
    NodoS * siguiente;

    NodoS(Sentimiento * _sentimiento){
        siguiente = NULL;
        sentimiento = _sentimiento;
    }
};

struct ColaS{
    NodoS * frente;
    int max;

    ColaS(){
        frente = NULL;
    }

    void encolar (NodoS * nuevo);
    NodoS* desencolar (void);
    NodoS* verFrente(void);
    bool vacia(void);
    void setCapacidad(int dato){max = dato;}
    int largo(void);
    bool llena(void);
};

struct FactoryS{
    ColaS * cola;
    char tipo; //L = amor, A = arte, E = maldad
    QMutex * mutexCola;
    int total;
    int llenos;
    int vacios;
    int rotos;

    bool btn = false;

    FactoryS(QMutex * _mutexCola, char _tipo){
        cola = new ColaS();
        cola->setCapacidad(20);
        mutexCola = _mutexCola;
        tipo = _tipo;
        total = llenos = vacios = rotos = 0;
    }

    void createNew();
};
