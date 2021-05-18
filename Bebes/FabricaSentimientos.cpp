#include "FabricaSentimientos.h"
//FUNCIONES COLA CORAZONES
void ColaS::encolar (NodoS * nuevo){
    if (vacia())
        frente = nuevo;
    else {
            NodoS * actual = frente;
            while (actual->siguiente != 0)
                          actual = actual->siguiente;
            actual->siguiente = nuevo;
        }
}

NodoS * ColaS::desencolar(void){
      if (vacia()){
         return 0;
      }
      else{
          NodoS * borrado = frente;
          frente = frente->siguiente;
          borrado->siguiente = 0;
          return borrado;
      }
}

bool ColaS::vacia (void){
     if (frente == 0)
        return true;
     else
         return false;
}

NodoS * ColaS::verFrente(){
      return frente;
}

int ColaS::largo(){
    if(vacia())
        return 0;
    int cont = 0;

    NodoS * actual = frente;
    while (actual != 0){
        cont++;
        actual = actual->siguiente;
    }
    return cont;
}
