#ifndef FACTORYS_H
#define FACTORYS_H

#endif // FACTORYS_H
struct Nodo {
    int dato;
    Nodo * siguiente;

    Nodo(int d){
        dato = d;
        siguiente = 0;
    }
};

struct colaCorazones{
    Nodo * frente;
    int capacidad;

    colaCorazones(){
        frente = 0;
    }
    void encolar (int dato);
    Nodo* desencolar (void);
    Nodo* verFrente(void);
    bool vacia(void);
    int setCapacidad(int dato);
};

struct colaNota{
    Nodo * frente;
    int capacidad;

    colaNota(){
        frente = 0;
    }
    void encolar (int dato);
    Nodo* desencolar (void);
    Nodo* verFrente(void);
    bool vacia(void);
    int setCapacidad(int dato);
};

struct colaDiablito{
    Nodo * frente;
    int capacidad;

    colaDiablito(){
        frente = 0;
    }
    void encolar (int dato);
    Nodo* desencolar (void);
    Nodo* verFrente(void);
    bool vacia(void);
    int setCapacidad(int dato);
};

struct colaSentimientos{
    Nodo * frente;
    int capacidad;

    colaSentimientos(){
        frente = 0;
    }
    void encolar (int dato);
    Nodo* desencolar (void);
    Nodo* verFrente(void);
    bool vacia(void);
    int setCapacidad(int dato);
};
