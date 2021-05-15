#include "Horno.h"

//HORNO
void colaHorno::encolar (int dato){
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

Nodo* colaHorno::desencolar(void){
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

bool colaHorno::vacia (void){
     if (frente == 0)
        return true;
     else
         return false;
}

Nodo* colaHorno::verFrente(){
      return frente;
}

int colaHorno::setCapacidad(int dato){

}

//HORNEADOS
void colaHorneados::encolar (int dato){
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

Nodo* colaHorneados::desencolar(void){
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

bool colaHorneados::vacia (void){
     if (frente == 0)
        return true;
     else
         return false;
}

Nodo* colaHorneados::verFrente(){
      return frente;
}
