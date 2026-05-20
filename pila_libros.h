#ifndef PILA_LIBROS_H
#define PILA_LIBROS_H

#include <iostream>
#include <string>

using namespace std;

// Estructura del Libro
class nodo {
public:
    int id;
    string titulo;
    string autor;
    nodo* sig;
};

// Definicion de la Clase
class pila {
private:
    nodo* inicio;
public:
    pila();      // Constructor
    void push(); // Agregar libro
    void pop();  // Sacar libro
    void show(); // Listar todo
    void top();  // Ver el de arriba
    void size(); // Contar libros
};

#endif
