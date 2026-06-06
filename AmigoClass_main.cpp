#include <iostream>

#include "ABMamigo.h"

using namespace std;

void menu() {

    cout << "\n====================================";
    cout << "\n        SISTEMA DE AMIGOS";
    cout << "\n====================================";
    cout << "\n1. Adicionar nuevo amigo";
    cout << "\n2. Listar amigos";
    cout << "\n3. Buscar registro";
    cout << "\n4. Eliminar registro";
    cout << "\n5. Modificar registro";
    cout << "\n0. Salir";
    cout << "\n====================================";
    cout << "\nSeleccione una opcion: ";
}

int main() {

    ABMamigo sistema("amigos.dat");

    int opcion;

    do {

        menu();

        cin >> opcion;

        switch (opcion) {

        case 1:

            cout << "\n=== ADICIONAR NUEVO AMIGO ===\n";

            sistema.adicionarNuevo();

            break;

        case 2:

            cout << "\n=== LISTA DE AMIGOS ===\n";

            sistema.listar();

            break;

        case 3:

            cout << "\n=== BUSCAR REGISTRO ===\n";

            sistema.buscarReg();

            break;

        case 4:

            cout << "\n=== ELIMINAR REGISTRO ===\n";

            sistema.eliminarReg();

            break;

        case 5:

            cout << "\n=== MODIFICAR REGISTRO ===\n";

            sistema.modificarReg();

            break;

        case 0:

            cout << "\nSaliendo del sistema...\n";

            break;

        default:

            cout << "\nOpcion invalida...";
        }

        if (opcion != 0) {

            cout << "\n\nPresione ENTER para continuar...";
            cin.ignore();
            cin.get();
        }

    } while (opcion != 0);

    return 0;
}
