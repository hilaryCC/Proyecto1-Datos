#include "FactoryS.h"
//FUNCIONES COLA CORAZONES
void colaCorazones::encolar (int dato){
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

Nodo* colaCorazones::desencolar(void){
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

bool colaCorazones::vacia (void){
     if (frente == 0)
        return true;
     else
         return false;
}

Nodo* colaCorazones::verFrente(){
      return frente;
}

int colaCorazones::setCapacidad(int dato){

}

//FUNCIONES COLA NOTAS
void colaNota::encolar (int dato){
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

Nodo* colaNota::desencolar(void){
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

bool colaNota::vacia (void){
     if (frente == 0)
        return true;
     else
         return false;
}

Nodo* colaNota::verFrente(){
      return frente;
}

int colaNota::setCapacidad(int dato){

}

//FUNCIONES COLA DIABLITO
void colaDiablito::encolar (int dato){
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

Nodo* colaDiablito::desencolar(void){
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

bool colaDiablito::vacia (void){
     if (frente == 0)
        return true;
     else
         return false;
}

Nodo* colaDiablito::verFrente(){
      return frente;
}

int colaDiablito::setCapacidad(int dato){

}

//FUNCIONES COLA SENTIMIENTOS
void colaSentimientos::encolar (int dato){
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

Nodo* colaSentimientos::desencolar(void){
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

bool colaSentimientos::vacia (void){
     if (frente == 0)
        return true;
     else
         return false;
}

Nodo* colaSentimientos::verFrente(){
      return frente;
}

int colaSentimientos::setCapacidad(int dato){

}
