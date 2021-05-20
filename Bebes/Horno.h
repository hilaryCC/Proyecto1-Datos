#ifndef HORNO_H
#define HORNO_H
#include "Fabricante.h"

#endif // HORNO_H
struct NodoHorno {
       colaBebe* bebe;
       NodoHorno* siguiente;

       NodoHorno(colaBebe* b)
       {
                bebe = b;
                siguiente = NULL;
       }

};

struct colaHorno{
    colaBebe * bebesAHornear;
    NodoHorno * frente;
    int capacidad;

    colaHorno(){
        frente = 0;
    }
    void encolar (colaBebe* bebe);
    NodoHorno* desencolar (void);
    NodoHorno* verFrente(void);
    bool vacia(void);
    int setCapacidad(int dato);

};

struct colaSupervisores{
    colaHorno * horneados;
    NodoHorno * frente;
    int capacidad;

    colaSupervisores(){
        frente = 0;
    }
    bool approve1();
    bool approve2();
    void encolar (colaBebe * horneado);
    NodoHorno* desencolar (void);
    NodoHorno* verFrente(void);
    bool vacia(void);
    int setCapacidad(int dato);
};



