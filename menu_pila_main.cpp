#include <iostream>
#include "pila.h"
using namespace std;
int main() {
    Pila p1, p2;
    int opcion;
    TipoDato valor;

    do {
        cout << "MENU PILAS " << endl;
        cout << "1.  Apilar en P1" << endl;
        cout << "2.  Apilar en P2" << endl;
        cout << "3.  Desapilar de P1" << endl;
        cout << "4.  Desapilar de P2" << endl;
        cout << "5.  Ver P1" << endl;
        cout << "6.  Ver P2" << endl;
        cout << "7.  Ver Cima de P1" << endl;
        cout << "8.  Ver Cima de P2" << endl;
        cout << "9.  Comparar P1 y P2 " << endl;
        cout << "10. Limpiar ambas pilas" << endl;
        cout << "0.  Salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            cout << "Valor para P1: ";
            cin >> valor;
            if (p1.Apilar(valor)) cout << "Elemento apilado." << endl;
            break;

        case 2:
            cout << "Valor para P2: ";
            cin >> valor;
            if (p2.Apilar(valor)) cout << "Elemento apilado." << endl;
            break;

        case 3:
            if (p1.Desapilar()) cout << "Elemento desapilado de P1." << endl;
            break;

        case 4:
            if (p2.Desapilar()) cout << "Elemento desapilado de P2." << endl;
            break;

        case 5:
            cout << "Pila 1:" << endl;
            p1.VerPila();
            break;

        case 6:
            cout << "Pila 2:" << endl;
            p2.VerPila();
            break;

        case 7:
            if (p1.CimaPila(valor)) cout << "La cima de P1 es: " << valor << endl;
            break;

        case 8:
            if (p2.CimaPila(valor)) cout << "La cima de P2 es: " << valor << endl;
            break;

        case 9:
            if (p1.Iguales(p2)) cout << "Las pilas son IGUALES." << endl;
            else cout << "Las pilas son DIFERENTES." << endl;
            break;

        case 10:
            p1.LimpiarPila();
            p2.LimpiarPila();
            cout << "Pilas reiniciadas." << endl;
            break;

        case 0:
            cout << "Saliendo..." << endl;
            break;

        default:
            cout << "Opcion no valida." << endl;
        }
    } while (opcion != 0);

    return 0;
}
