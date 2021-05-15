#ifndef BEBESFABRICADOS_H
#define BEBESFABRICADOS_H

#include "Fabricante.h"

#endif // BEBESFABRICADOS_H

struct colaFabricados{
    Fabricante * bebe;
    Nodo * frente;

    int capacidad;

    colaFabricados(){
        frente = 0;
    }
    void encolar (int dato);
    Nodo* desencolar (void);
    Nodo* verFrente(void);
    bool vacia(void);
    int setCapacidad(int dato);
};
