#include <iostream>
#include "Nodo.h"
using namespace std;

void Encolar(Nodo*& inicio, Nodo*& fin) {
    Nodo* Elemento = new Nodo;

    cout << "Precio: "; cin >> Elemento->dato.Precio;
    cout << "Nombre: "; cin >> Elemento->dato.Nombre;
    cout << "Genero: "; cin >> Elemento->dato.Genero;

    if (inicio == NULL) {
        inicio = fin = Elemento;
    }
    else {
        fin->puntero = Elemento;
        fin = Elemento;
    }
}

void Desencolar(Nodo*& inicio) {
    if (inicio != NULL) {
        Nodo* aux = inicio;

        cout << "Precio: " << aux->dato.Precio << endl;
        cout << "Nombre: " << aux->dato.Nombre << endl;
        cout << "Genero: " << aux->dato.Genero << endl;

        inicio = inicio->puntero;
        delete aux;
    }
    else {
        cout << "La cola se encuentra vacia" << endl;
    }
}


void MostrarCola(Nodo* inicio) {
    Nodo* aux = inicio;

    if (aux == NULL) {
        cout << "La cola esta vacia" << endl;
    }
    else {
        cout << "\n--- Elementos de la cola ---\n";
        while (aux != NULL) {
            cout << "Precio: " << aux->dato.Precio << endl;
            cout << "Nombre: " << aux->dato.Nombre << endl;
            cout << "Genero: " << aux->dato.Genero << endl;
            cout << "--------------------------" << endl;

            aux = aux->puntero;
        }
    }
}

int main() {
    Nodo* inicio = NULL, * fin = NULL;
    int opc = 0;

    do {
        cout << "\n1. LA COLA ESTA VACIA?" << endl;
        cout << "2. ANADIR UN JUEGO" << endl;
        cout << "3. QUITAR UN JUEGO" << endl;
        cout << "4. MOSTRAR COLA" << endl;
        cout << "0. FINALIZAR" << endl;
        cout << "Opcion: "; cin >> opc;

        switch (opc) {
        case 1:
            if (inicio == NULL)
                cout << "La cola esta vacia" << endl;
            else
                cout << "Existen juegos en la cola" << endl;
            break;

        case 2:
            Encolar(inicio, fin);
            break;

        case 3:
            Desencolar(inicio);
            break;

        case 4:
            MostrarCola(inicio);
            break;
        }

    } while (opc != 0);

    return 0;
}
