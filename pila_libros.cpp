#include <iostream>
#include <stdlib.h>
#include <string>
#include "pila_libros.h"

using namespace std;

pila::pila() {
    inicio = NULL;
}

void pila::push() {
    nodo* aux = new nodo;
    system("cls");
    cout << "=== APILAR NUEVO LIBRO ===\n";
    cout << "ID/ISBN: ";
    cin >> aux->id;
    cout << "Titulo: ";
    cin.ignore();
    getline(cin, aux->titulo);
    cout << "Autor: ";
    getline(cin, aux->autor);

    aux->sig = inicio;
    inicio = aux;

    cout << "\nLibro agregado al estante!\n";
    system("pause");
}

void pila::pop() {
    system("cls");
    if (inicio == NULL) {
        cout << "\nEl estante esta vacio!\n\n";
    }
    else {
        nodo* temp = inicio;
        inicio = inicio->sig;
        cout << "=== RETIRANDO LIBRO ===\n";
        cout << "Titulo: " << temp->titulo << "\n";
        delete temp;
        cout << "\nLibro retirado con exito.\n";
    }
    system("pause");
}

void pila::show() {
    nodo* aux1 = inicio;
    system("cls");
    if (inicio == NULL) {
        cout << "\nNo hay libros.\n";
    }
    else {
        cout << "=== ESTANTE COMPLETO ===\n\n";
        while (aux1 != NULL) {
            cout << "[" << aux1->id << "] " << aux1->titulo << " - " << aux1->autor << endl;
            aux1 = aux1->sig;
        }
    }
    system("pause");
}

void pila::top() {
    system("cls");
    if (inicio == NULL) {
        cout << "\nEstante vacio.\n";
    }
    else {
        cout << "=== LIBRO EN LA CIMA ===\n";
        cout << "Titulo: " << inicio->titulo << endl;
    }
    system("pause");
}

void pila::size() {
    system("cls");
    nodo* aux1 = inicio;
    int contador = 0;
    while (aux1) {
        contador++;
        aux1 = aux1->sig;
    }
    cout << "Hay " << contador << " libros en la pila.\n";
    system("pause");
}
