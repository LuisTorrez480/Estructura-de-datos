#include <iostream>
using namespace std;
#include "Queue.h"

int main() {
    Queue q;
    int opcion;
    int valor;

    do {
        cout << "\n----- Menu -----\n";
        cout << "1. Insertar elemento\n";
        cout << "2. Retirar elemento\n";
        cout << "3. Ver el tamano de la cola\n";
        cout << "4. Comprobar si la cola esta vacia\n";
        cout << "0. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1:
            cout << "Ingrese un valor (entero): ";
            cin >> valor;
            if (q.put(valor) == -1) {
                cout << "Error: La cola esta llena." << endl;
            }
            else {
                cout << "Elemento " << valor << " insertado." << endl;
            }
            break;

        case 2:
            valor = q.get();
            if (valor == -1) {
                cout << "Error: La cola esta vacia." << endl;
            }
            else {
                cout << "Elemento retirado: " << valor << endl;
            }
            break;

        case 3:
            cout << "Tamano de la cola: " << q.size() << endl;
            break;

        case 4:
            if (q.empty()) {
                cout << "La cola esta vacia." << endl;
            }
            else {
                cout << "La cola no esta vacia." << endl;
            }
            break;

        case 0:
            cout << "Adios!" << endl;
            break;

        default:
            cout << "Opcion no valida. Intente nuevamente." << endl;
        }

    } while (opcion != 0);

    return 0;
}
