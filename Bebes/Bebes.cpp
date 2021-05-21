#include "Bebes.h"

void colaBebe::encolar (nodoBebe * nuevo){
    if (vacia())
        frente = nuevo;
    else {
            nodoBebe * actual = frente;
            while (actual->siguiente != 0)
                          actual = actual->siguiente;
            actual->siguiente = nuevo;
            addCont(nuevo->bebe->tipo);
            total++;
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

void colaBebe::setCapacidad(int dato){
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

void colaBebe::addCont(string tipo){
    if(tipo == "Moreno")
        moreno++;
    else if(tipo == "Afrodescendiente")
        afro++;
    else if(tipo == "Rubio")
        rubio++;
    else if(tipo == "Castaño")
        casta++;
    else if(tipo == "Pelirrojo")
        peli++;
    else if(tipo == "Pink")
        pink++;
    else if(tipo == "Bad Bunny")
        badB++;
    else if(tipo == "Pitufo")
        pitufo++;
}






void colaMalos::encolar (nodoBebe * nuevo){
    if (vacia())
        frente = nuevo;
    else {
            nodoBebe * actual = frente;
            while (actual->siguiente != 0)
                          actual = actual->siguiente;
            actual->siguiente = nuevo;
        }
}

nodoBebe * colaMalos::desencolar(void){
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

bool colaMalos::vacia (void){
     if (frente == 0)
        return true;
     else
         return false;
}

nodoBebe * colaMalos::verFrente(){
      return frente;
}


int colaMalos::largo(){
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
