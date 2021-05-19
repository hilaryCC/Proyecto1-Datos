#include "Fabricante.h"

void Fabricante::createNew(){
    int cantidadr = rand()%101;
    int cantidad = 0;

    Sentimiento * corazon;
    Sentimiento * arte;
    Sentimiento * maldad;
}

Bebe * Fabricante::RandBaby(int a, int b, int c){
    if(a == 3 && b == 3 && c == 2)
        return new Bebe("Moreno");
    else if(a == 3 && b == 3 && c == 3)
        return new Bebe("Afrodescendiente");
    else if(a == 3 && b == 2 && c == 2)
        return new Bebe("Rubio");
    else if(a == 3 && b == 2 && c == 3)
        return new Bebe("Castaño");
    else if(a == 2 && b == 2 && c == 2)
        return new Bebe("Pelirrojo");
    else if(a == 2 && b == 2 && c == 3)
        return new Bebe("Pink");
    else if(a == 1 && b == 3 && c == 2)
        return new Bebe("Bad Bunny");
    else if(a == 1 && b == 3 && c == 3)
        return new Bebe("Pitufo");
    else return new Bebe("Malo");
}
