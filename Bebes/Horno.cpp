/*#include "Horno.h"

//HORNO
void colaHorno::encolar (int dato){
    if (vacia())
        frente = new NodoHorno (dato);
    else {
            NodoHorno* actual = frente;
            while (actual->siguiente != 0)
                          actual = actual->siguiente;
            NodoHorno* nuevo = new NodoHorno (dato);
            actual->siguiente = nuevo;
        }
}

NodoHorno* colaHorno::desencolar(void){
      if (vacia()){
         return 0;
      }
      else{
          NodoHorno* borrado = frente;
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

NodoHorno* colaHorno::verFrente(){
      return frente;
}

int colaHorno::setCapacidad(int dato){

}

//HORNEADOS
void colaSupervisores::encolar (int dato){
    if (vacia())
        frente = new NodoHorno (dato);
    else {
            NodoHorno* actual = frente;
            while (actual->siguiente != 0)
                          actual = actual->siguiente;
            NodoHorno* nuevo = new NodoHorno (dato);
            actual->siguiente = nuevo;
        }
}

NodoHorno* colaSupervisores::desencolar(void){
      if (vacia()){
         return 0;
      }
      else{
          NodoHorno* borrado = frente;
          frente = frente->siguiente;
          borrado->siguiente = 0;
          return borrado;
      }
}

bool colaSupervisores::vacia (void){
     if (frente == 0)
        return true;
     else
         return false;
}

NodoHorno* colaSupervisores::verFrente(){
      return frente;
}*/
