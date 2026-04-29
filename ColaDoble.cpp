// Ricardo Soruco 29/04/26
#include "ColaDoble.h"
#include "NodoDoble.h"
#include <iostream>
using namespace std;
ColaDoble::ColaDoble() {
    frente = NULL;
    final = NULL;
}

bool ColaDoble::InsertarFrente(int dato) {
    Nodo* nuevo = new Nodo(dato);

    if (Vacia()) {
        frente = nuevo;
        final = nuevo;
    }
    else {
        nuevo->siguiente = frente;
        frente->anterior = nuevo;
        frente = nuevo;
    }

    return true;
}

bool ColaDoble::InsertarFinal(int dato) {
    Nodo* nuevo = new Nodo(dato);

    if (Vacia()) {
        frente = nuevo;
        final = nuevo;
    }
    else {
        final->siguiente = nuevo;
        nuevo->anterior = final;
        final = nuevo;
    }

    return true;
}

bool ColaDoble::EliminarFrente() {
    if (Vacia()) {
        cout << "Vacia" << endl;
        return false;
    }

    Nodo* aux = frente;
    frente = frente->siguiente;

    if (frente == NULL) {
        final = NULL;
    }
    else {
        frente->anterior = NULL;
    }

    delete aux;
    return true;
}

bool ColaDoble::EliminarFinal() {
    if (Vacia()) {
        cout << "Vacia" << endl;
        return false;
    }

    Nodo* aux = final;
    final = final->anterior;

    if (final == NULL) {
        frente = NULL;
    }
    else {
        final->siguiente = NULL;
    }

    delete aux;
    return true;
}

void ColaDoble::VerFrente() {
    if (Vacia()) {
        cout << "Vacia" << endl;
    }
    else {
        cout << "Frente: " << frente->dato << endl;
    }
}

void ColaDoble::VerCola() {
    Nodo* aux = frente;

    while (aux != NULL) {
        cout << aux->dato << " <-> ";
        aux = aux->siguiente;
    }

    cout << "NULL" << endl;
}

void ColaDoble::Tamanio() {
    int cont = 0;
    Nodo* aux = frente;

    while (aux != NULL) {
        cont++;
        aux = aux->siguiente;
    }

    cout << "Tamanio: " << cont << endl;
}

bool ColaDoble::Vacia() {
    return frente == NULL;
}
