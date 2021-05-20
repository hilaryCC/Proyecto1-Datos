#include "Fabricante.h"

void Fabricante::createNew(){
    int cantidadr = rand()%101;
    int cantidad = 0;
    int a = 0;
    int b = 0;
    int c = 0;

    mCor->lock();
    Sentimiento * corazon = corazones->fabrica->cola->desencolar()->sentimiento;
    mCor->unlock();

    mArt->lock();
    Sentimiento * arte = artes->fabrica->cola->desencolar()->sentimiento;
    mArt->unlock();

    mMal->lock();
    Sentimiento * maldad = maldades->fabrica->cola->desencolar()->sentimiento;
    mMal->unlock();

    if(corazon == 0 || arte == 0 || maldad == 0){
        a = b = c = 1;
    }
    else {
        a = corazon->valor;
        b = arte->valor;
        c = maldad->valor;
    }

    if(cantidadr < 2)
        cantidad = 4;
    else if(cantidadr >= 2 && cantidadr < 5)
        cantidad = 3;
    else if(cantidadr >= 5 && cantidadr < 10)
        cantidad = 2;
    else cantidad = 1;

    Bebe * nuevo = NULL;

    for(int i = 0; i < cantidad; i++){
        nuevo = RandBaby(a,b,c);
        if(nuevo->tipo == "Malo")
            malos->encolar(new nodoBebe(nuevo));
        else{
            mBebes->lock();
            if(!colaBebes->llena()){
                colaBebes->encolar(new nodoBebe(nuevo));
            }
            else{
                malos->encolar(new nodoBebe(nuevo));
            }
            mBebes->unlock();
        }
    }

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
