/* #include "Horno.h"

//HORNO
void colaHorno::encolar(colaBebe *bebe){
    if (vacia())
        frente = new NodoHorno (bebe);
    else {
            NodoHorno* actual = frente;
            while (actual->siguiente != 0)
                          actual = actual->siguiente;
            NodoHorno* nuevo = new NodoHorno (bebe);
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
void colaSupervisores::encolar(colaBebe *horneado){
    if (vacia())
        frente = new NodoHorno (horneado);
    else {
            NodoHorno* actual = frente;
            while (actual->siguiente != 0)
                          actual = actual->siguiente;
            NodoHorno* nuevo = new NodoHorno (horneado);
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
