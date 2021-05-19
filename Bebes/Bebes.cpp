#include "Bebes.h"

void colaBebe::encolar (nodoBebe * nuevo){
    if (vacia())
        frente = nuevo;
    else {
            nodoBebe * actual = frente;
            while (actual->siguiente != 0)
                          actual = actual->siguiente;
            actual->siguiente = nuevo;
        }
}

nodoBebe * colaBebe::desencolar(void){
      if (vacia()){
         return 0;
      }
      else{
          nodoBebe * borrado = frente;
          frente = frente->siguiente;
          borrado->siguiente = 0;
          return borrado;
      }
}

bool colaBebe::vacia (void){
     if (frente == 0)
        return true;
     else
         return false;
}

nodoBebe * colaBebe::verFrente(){
      return frente;
}

int colaBebe::setCapacidad(int dato){
    capacidad = dato;
}

int colaBebe::largo(){
    if(vacia())
        return 0;
    int cont = 0;

    nodoBebe * actual = frente;
    while (actual != 0){
        cont++;
        actual = actual->siguiente;
    }
    return cont;
}

bool colaBebe::llena(){
    return largo() >= capacidad;
}

