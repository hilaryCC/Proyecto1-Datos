#include "fabricantethread.h"

void FabricanteThread::run(){
    while(running){
        while(pause){
            msleep(500);
            fabricante->mBebes->lock();
            if(!fabricante->colaBebes->llena() && !fabricante->btn)
                pausar();
            fabricante->mBebes->unlock();
        }
        fabricante->mBebes->lock();
        if(fabricante->colaBebes->llena()){
            pausar();
        }
        else{
            fabricante->createNew();
        }
        fabricante->mBebes->unlock();
        sleep(tiempo);
    }
}

void FabricanteThread::pausar(){
    pause = !pause;
}
