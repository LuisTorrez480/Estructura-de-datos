#pragma once
#include <iostream>
#define MAX_SIZE 256 /* capacidad maxima */
typedef char almacen[MAX_SIZE];
class Queue
{

    int cabeza; /* puntero de lectura */
    int cola; /* puntero de escritura */
    int ITEMS; /* numero de elementos en la lista */
    int ITEMSIZE; /* tamano de cada elemento */
    almacen alma; /* el almacen */

public:
    // constructor
    Queue() {
        cabeza = 0;
        cola = 0;
        ITEMS = 0;
        ITEMSIZE = 1;
    }

    // destructor
    ~Queue() {}

    // regresa 1 (true) si la lista esta vacia
    int empty() { return ITEMS == 0; }

    // insertar elemento a la lista
    int put(int d)
    {
        if (ITEMS == MAX_SIZE) return -1;
        if (cola >= MAX_SIZE) { cola = 0; }
        alma[cola] = d;
        cola++;
        ITEMS++;
        return d;
    }

    // retirar elemento de la lista
    int get()
    {
        char d;
        if (empty()) return -1;
        if (cabeza >= MAX_SIZE) { cabeza = 0; }
        d = alma[cabeza];
        cabeza++;
        ITEMS--;
        return d;
    }

    // regresa el numero de elementos en lista
    int size() { return ITEMS; }
};
