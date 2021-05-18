#ifndef ALMACEN_H
#define ALMACEN_H
#include "FabricaSentimientos.h"

#endif // ALMACEN_H
struct colaAlmacen{
    Nodo * frente;

    colaAlmacen(){
        frente = 0;
    }
    void encolar (int dato);
    Nodo* desencolar (void);
    Nodo* verFrente(void);
    bool vacia(void);
    void imprimirAlmacen(void);
};
