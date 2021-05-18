#ifndef HORNO_H
#define HORNO_H

#endif // HORNO_H
#include "FabricaSentimientos.cpp"

struct colaHorno{
    colaSentimientos * frenteCola;
    Nodo * frente;
    int capacidad;

    colaHorno(){
        frente = 0;
    }
    void encolar (int dato);
    Nodo* desencolar (void);
    Nodo* verFrente(void);
    bool vacia(void);
    int setCapacidad(int dato);

};

struct colaHorneados{
    colaHorno * horneados;
    Nodo * frente;
    int capacidad;

    colaHorneados(){
        frente = 0;
    }
    bool approve1();
    bool approve2();
    void encolar (int dato);
    Nodo* desencolar (void);
    Nodo* verFrente(void);
    bool vacia(void);
    int setCapacidad(int dato);
};
