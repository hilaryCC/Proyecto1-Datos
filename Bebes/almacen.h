#ifndef ALMACEN_H
#define ALMACEN_H
#include "FabricaSentimientos.h"

#endif // ALMACEN_H
struct NodoAlmacen {
       int dato;
       NodoAlmacen* siguiente;

       NodoAlmacen(int d)
       {
                dato = d;
                siguiente = NULL;
       }

};

struct colaAlmacen{
    NodoAlmacen * frente;

    colaAlmacen(){
        frente = 0;
    }
    void encolar (int dato);
    NodoAlmacen* desencolar (void);
    NodoAlmacen* verFrente(void);
    bool vacia(void);
    void imprimirAlmacen(void);
};
