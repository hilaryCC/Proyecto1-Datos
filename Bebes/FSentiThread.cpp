#include "FSentiThread.h"

void FactorySThread::run(){
    while(running){
        while(pause){
            fabrica->mutexCola->lock();
            if(!fabrica->cola->llena() && !fabrica->btn)
                pausar();
            fabrica->mutexCola->unlock();
            msleep(500);
        }

        fabrica->mutexCola->lock();
        if(fabrica->cola->llena()){
            pausar();
        }
        else{
            fabrica->createNew();
        }
        fabrica->mutexCola->unlock();
        sleep(tiempo);
    }
}

void FactorySThread::pausar(){
    pause = !pause;
}
