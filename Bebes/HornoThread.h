#ifndef HORNOTHREAD_H
#define HORNOTHREAD_H
#include "Horno.h"

class HornoThread : public QThread
{
public:
    colaBebe * bebeAHornear;
    colaSupervisores * horneados;
    int tiempo;
    int capacidad;
    QMutex* mutex;

    bool running;
    bool pause;
    HornoThread(){}

    void _init_(colaBebe * bebeAHornear, int tiempo, int capacidad){
        this->bebeAHornear = bebeAHornear;
        this->tiempo = tiempo;
        this->capacidad = capacidad;
        running = true;
        pause = false;
    }

    void run() {
        while(capacidad != 0){
            this->mutex->lock();
            horneados->encolar(bebeAHornear);
            this->mutex->unlock();
            sleep(this->tiempo);
        }
    }
    void pausar(){
        pause = !pause;
    }

};

#endif // HORNOTHREAD_H
