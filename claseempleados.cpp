#include <iostream>
#include "claseempleados.h"
#include <string>
using namespace std;

Empleado::Empleado(string n, string a, string c) {
    nombre = n;
    apellido = a;
    cargo = c;
    generarCorreo();
}

void Empleado::generarCorreo() {
    correo = nombre + "." + apellido + "@empresa.com";
    if (correo[0] >= 'A' && correo[0] <= 'Z') {
        correo[0] += 32;
    }
}

void Empleado::mostrarInformacion() {
    cout << "Nombre completo: " << nombre << " " << apellido << endl;
    cout << "Correo: " << correo << endl;
    cout << "Cargo: " << cargo << endl;
    cout << "Longitud del nombre: " << nombre.length() << endl;
    cout << "Inicial del apellido: " << apellido.substr(0, 1) << endl;
    cout << "'@' esta en el correo?: ";
    cout << (correo.find('@') != string::npos ? "Si" : "No") << endl;
    cout << endl;
}

void Empleado::cambiarCargo(string nuevoCargo) {
    cout << "Cargo anterior: " << cargo << endl;
    cargo = nuevoCargo;
    cout << "Cargo actualizado: " << cargo << endl << endl;
}

void Empleado::corregirApellido(string nuevoApellido) {
    cout << "Corrigiendo apellido..." << endl;
    apellido = nuevoApellido;
    generarCorreo();
}

void Empleado::depurarNombre() {
    cout << "Nombre original: " << nombre << endl;
    if (!nombre.empty()) {
        nombre.erase(0, 1);
        nombre.insert(0, "Sr. ");
    }
    cout << "Nombre despues de depurar: " << nombre << endl;
}
