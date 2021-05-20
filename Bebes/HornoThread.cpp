#include "HornoThread.h"

void HornoThread::run(){
    while(running){
        while(pause){
            msleep(500);
            fabrica->mutexCola->lock();
            if(!fabrica->cola->llena())
                pausar();
            fabrica->mutexCola->unlock();
        }

        fabrica->mutexCola->lock();
        if(fabrica->cola->llena())
            pausar();
        fabrica->mutexCola->unlock();
        fabrica->createNew();
        sleep(tiempo);
    }
}

void HornoThread::pausar(){
    pause = !pause;
}
