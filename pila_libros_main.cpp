#include <iostream>
#include "pila_libros.h"

using namespace std;

int main() {
    pila estante;
    int opcion;

    do {
        system("cls");
        cout << "--- GESTION DE BIBLIOTECA ---" << endl;
        cout << "[1] Push (Agregar Libro)" << endl;
        cout << "[2] Pop (Retirar Libro)" << endl;
        cout << "[3] Mostrar Estante" << endl;
        cout << "[4] Ver Cima" << endl;
        cout << "[5] Contar Libros" << endl;
        cout << "[0] Salir" << endl;
        cout << "\nOpcion: ";
        cin >> opcion;

        switch (opcion) {
        case 1: estante.push(); break;
        case 2: estante.pop();  break;
        case 3: estante.show(); break;
        case 4: estante.top();  break;
        case 5: estante.size(); break;
        case 0: return 0;
        default:
            cout << "Error: Opcion no valida.\n";
            system("pause");
        }
    } while (opcion != 0);

    return 0;
}
