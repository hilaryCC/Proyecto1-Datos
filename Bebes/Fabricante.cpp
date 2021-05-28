#include "Fabricante.h"

void Fabricante::createNew(){
    int cantidadr = rand()%101;
    int cantidad = 0;
    int a = 0;
    int b = 0;
    int c = 0;
    NodoS * corazon = 0;
    NodoS * arte = 0;
    NodoS * maldad = 0;

    mTodo->lock();
    if(!corazones->cola->vacia())
        corazon = corazones->cola->desencolar();
    mTodo->unlock();
    mTodo->lock();
    if(!artes->cola->vacia())
        arte = artes->cola->desencolar();
    mTodo->unlock();
    mTodo->lock();
    if(!maldades->cola->vacia())
        maldad = maldades->cola->desencolar();
    mTodo->unlock();

    if(corazon != 0 && arte != 0 && maldad != 0){
        a = corazon->sentimiento->valor;
        b = arte->sentimiento->valor;
        c = maldad->sentimiento->valor;

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
            if(nuevo->tipo == "Malo"){
                mMalos->lock();
                malos->encolar(new nodoBebe(nuevo));
                malos->contFab++;
                malos->total++;
                mMalos->unlock();
            }
            else{
                if(!colaBebes->llena()){
                    colaBebes->encolar(new nodoBebe(nuevo));
                }
                else{
                    mMalos->lock();
                    malos->encolar(new nodoBebe(nuevo));
                    mMalos->unlock();
                }
            }
        }
    }
}

Bebe * Fabricante::RandBaby(int a, int b, int c){
        srand((unsigned)time(0));
        int numHijos = (rand()%90)+10;
        if (numHijos >= 0 and numHijos <= 89){
            cout << "unico" << endl;
        } else if (numHijos >= 90 and numHijos <=94){
            cout << "mellizo" << endl;
        } else if (numHijos >= 95 and numHijos <=97){
            cout << "trillizo" << endl;
        } else {
            cout << "otro" << endl;
        }

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
