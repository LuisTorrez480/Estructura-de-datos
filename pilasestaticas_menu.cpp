#include <iostream>
#include "pila.h"
using namespace std;
int main() {
    int  r, opcion;
    Pila p1, p2;
    do {
        cout << endl;
        cout << "1 Apilar" << endl;
        cout << "2.- Desapilar" << endl;
        cout << "3.- Ver elemento de pila" << endl;
        cout << "4.- Pila vacia" << endl;
        cout << "5.- iguales" << endl;
        cout << "6.- ver pilas" << endl;
        cout << "7 limpiar pila" << endl;
        cout << "0.- salir" << endl;
        cout << "Elige una opcion: ";
        cin >> opcion;
        switch (opcion) {
        case 1:
            cout << "ingresa el dato a apilar" << endl;
            cin >> r;
            if (p1.Apilar(r))
                cout << "se proceso la apilacion" << endl;
            break;
        case 2:
            if (p1.Desapilar())
                cout << "se proceso la desapilacion" << endl;
            break;
        case 3:
            if (p1.CimaPila(r))
                cout << "el elemento de la pila es " << r << endl;;
            break;
        case 4: 
            if (p1.PilaVacia())
                cout << "La pila esta vacia" << endl;
            else
                cout << "la pila tiene elementos" << endl;
            break;
        case 5:
            if (p1.PilaVacia())
                cout << "La pila esta vacia" << endl;
            break;
        case 6:
            p1.VerPila();
            break;
        case 7:
            p1.LimpiarPila();
                cout << "La pila esta limpia" << endl;
            break;

        case 0: cout << "Salir"; 
            break;
        default: cout << "Opcion invalida" << endl;
        }
        if ((opcion >= 1) && (opcion <= 4))
            cout << "El resultado es " << r << endl;
    } while (opcion != 0);
    return 0;
}
