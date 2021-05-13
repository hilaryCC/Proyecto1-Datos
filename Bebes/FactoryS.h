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

    colaCorazones(){
        frente = 0;
    }
    void encolar (int dato);
    Nodo* desencolar (void);
    Nodo* verFrente(void);
    bool vacia(void);
};

struct colaNota{
    Nodo * frente;

    colaNota(){
        frente = 0;
    }
    void encolar (int dato);
    Nodo* desencolar (void);
    Nodo* verFrente(void);
    bool vacia(void);
};

struct colaDiablito{
    Nodo * frente;

    colaDiablito(){
        frente = 0;
    }
    void encolar (int dato);
    Nodo* desencolar (void);
    Nodo* verFrente(void);
    bool vacia(void);
};

struct colaSentimientos{
    Nodo * frente;

    colaSentimientos(){
        frente = 0;
    }
    void encolar (int dato);
    Nodo* desencolar (void);
    Nodo* verFrente(void);
    bool vacia(void);
};
