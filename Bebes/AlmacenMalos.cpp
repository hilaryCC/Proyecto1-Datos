#include "almacenMalos.h"

void colaMalos::encolar (int dato){
    if (vacia())
        frente = new Nodo (dato);
    else {
            Nodo* actual = frente;
            while (actual->siguiente != 0)
                          actual = actual->siguiente;
            Nodo* nuevo = new Nodo (dato);
            actual->siguiente = nuevo;
        }
}

Nodo* colaMalos::desencolar(void){
      if (vacia()){
         return 0;
      }
      else{
          Nodo* borrado = frente;
          frente = frente->siguiente;
          borrado->siguiente = 0;
          return borrado;
      }
}

bool colaMalos::vacia (void){
     if (frente == 0)
        return true;
     else
         return false;
}

Nodo* colaMalos::verFrente(){
      return frente;
}
