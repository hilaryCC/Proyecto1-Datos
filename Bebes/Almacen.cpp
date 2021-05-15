#include "almacen.h"
#include "mainwindow.h"
void colaAlmacen::imprimirAlmacen(void){
     int cont = 10;
     Nodo *tmp = frente;
     while (tmp != 0 and cont <= 10){
           //printf(tmp->dato);
           tmp = tmp->siguiente;
           cont = cont - 10;
     }
}
