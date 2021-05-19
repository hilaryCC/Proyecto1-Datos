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

bool ColaS::llena(){
    return largo() >= max;
}




void FactoryS::createNew(){
    int random = rand()%101;
    char _tipo;
    int modo;
    switch(tipo){
        case 'L':
            if(random < 33){
                _tipo = 'L';
                modo = 3;
            }
            else if(random > 33 && random < 66){
                _tipo = 'L';
                modo = 2;
            }
            else {
                _tipo = 'L';
                modo = 3;
            }
            break;

        case 'A':
            if(random < 33){
                _tipo = 'A';
                modo = 2;
            }
            else {
                _tipo = 'A';
                modo = 3;
            }
            break;

        case 'E':
            if(random < 33){
                _tipo = 'E';
                modo = 3;
            }
            else {
                _tipo = 'E';
                modo = 2;
            }
            break;

        default:
            _tipo = tipo;
            modo = 3;
            break;
    }
    mutexCola->lock();
    if(!cola->llena())
        cola->encolar(new NodoS(new Sentimiento(_tipo, modo)));
    mutexCola->unlock();
}












