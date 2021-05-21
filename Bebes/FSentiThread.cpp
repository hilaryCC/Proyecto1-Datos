#include "FSentiThread.h"

void FactorySThread::run(){
    while(running){
        while(pause){
            fabrica->mutexCola->lock();
            if(!fabrica->cola->llena())
                pausar();
            fabrica->mutexCola->unlock();
            msleep(500);
        }

        fabrica->mutexCola->lock();
        if(fabrica->cola->llena()){
            pausar();
            cout << "Senti1 " << fabrica->tipo << endl;
        }
        else{
            fabrica->createNew();
            cout << "Senti " << fabrica->tipo << endl;
        }
        fabrica->mutexCola->unlock();
        sleep(tiempo);
    }
}

void FactorySThread::pausar(){
    pause = !pause;
}
