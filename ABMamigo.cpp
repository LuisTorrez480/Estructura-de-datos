//Ricardo Soruco ABMamigo.cpp 12/05/26

#include "ABMamigo.h"

ABMamigo::ABMamigo(string nomArch) {
    nomArchivo = nomArch;
}

void ABMamigo::introducirDatos(Amigo* newReg) {

    string nombre;
    string fechaNacimiento;
    char sexo;

    cout << "\n\nIntroducir datos:\n";

    cin.ignore();

    cout << "Nombre: ";
    getline(cin, nombre);

    cout << "Fecha de nacimiento: ";
    cin >> fechaNacimiento;

    cout << "Sexo (F/M): ";
    cin >> sexo;

    newReg->setAmigo(nombre, fechaNacimiento, sexo);
}

void ABMamigo::mostrarRegistro(int nroReg) {

    cout << endl
        << nroReg
        << ".- "
        << amig->getNombre()
        << " "
        << amig->getFechaNacimiento()
        << " "
        << amig->getSexo()
        << " "
        << amig->getEstado();
}

void ABMamigo::adicionarNuevo() {

    ofstream fsalida(nomArchivo, ios::app | ios::binary);

    amig = new Amigo();

    introducirDatos(amig);

    amig->guardarArchivo(fsalida);

    fsalida.close();
}

void ABMamigo::listar() {

    int cr = 0;

    amig = new Amigo();

    ifstream fentrada(nomArchivo, ios::binary);

    while (amig->leerArchivo(fentrada)) {

        cr++;

        if (amig->getEstado() == 'A') {
            mostrarRegistro(cr);
        }
    }

    fentrada.close();
}

int ABMamigo::buscarReg() {

    int nroReg;

    cout << "\nNumero de registro: ";
    cin >> nroReg;

    amig = new Amigo();

    ifstream fentrada(nomArchivo, ios::binary);

    if (amig->buscar(fentrada, nroReg)) {

        mostrarRegistro(nroReg);

    }
    else {

        cout << "\nRegistro no existe";

        nroReg = -1;
    }

    fentrada.close();

    return nroReg;
}

void ABMamigo::eliminarReg() {
    cout << "\nFuncion pendiente";
}

void ABMamigo::modificarReg() {
    cout << "\nFuncion pendiente";
}
