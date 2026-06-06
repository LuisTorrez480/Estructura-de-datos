#include <iostream>
using namespace std;
#include "NodoDoble.h"
#include "ColaDoble.h"
int main()
{
    ColaDoble c;
    int opcion, dato;

    do {
        cout << endl;
        cout << "===== COLA DOBLE =====" << endl;
        cout << "1. Insertar por frente" << endl;
        cout << "2. Insertar por final" << endl;
        cout << "3. Eliminar por frente" << endl;
        cout << "4. Eliminar por final" << endl;
        cout << "5. Ver frente" << endl;
        cout << "6. Ver cola" << endl;
        cout << "7. Tamanio" << endl;
        cout << "0. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            cout << "Dato: ";
            cin >> dato;
            c.InsertarFrente(dato);
            break;

        case 2:
            cout << "Dato: ";
            cin >> dato;
            c.InsertarFinal(dato);
            break;

        case 3:
            c.EliminarFrente();
            break;

        case 4:
            c.EliminarFinal();
            break;

        case 5:
            c.VerFrente();
            break;

        case 6:
            c.VerCola();
            break;

        case 7:
            c.Tamanio();
            break;

        case 0:
            cout << "Saliendo..." << endl;
            break;

        default:
            cout << "Opcion invalida" << endl;
        }

    } while (opcion != 0);

    return 0;
}
