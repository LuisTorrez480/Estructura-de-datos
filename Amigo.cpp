//Ricardo Soruco Amigo.cpp 12/05/26

#include "Amigo.h"

Amigo::Amigo() {
    nombre = "";
    fechaNacimiento = "";
    sexo = ' ';
    estado = ' ';
}

Amigo::Amigo(string nom, string fechaNac, char sx) {
    nombre = nom;
    fechaNacimiento = fechaNac;
    sexo = sx;
    estado = 'A';
}

void Amigo::setAmigo(string nom, string fechaNac, char sx) {
    nombre = nom;
    fechaNacimiento = fechaNac;
    sexo = sx;
    estado = 'A';
}

string Amigo::getNombre() {
    return nombre;
}

string Amigo::getFechaNacimiento() {
    return fechaNacimiento;
}

char Amigo::getSexo() {
    return sexo;
}

char Amigo::getEstado() {
    return estado;
}

void Amigo::guardarArchivo(ofstream& fsalida) {

    size_t lenFecha = fechaNacimiento.size();
    fsalida.write(reinterpret_cast<char*>(&lenFecha), sizeof(lenFecha));
    fsalida.write(fechaNacimiento.c_str(), lenFecha);

    fsalida.write(reinterpret_cast<char*>(&sexo), sizeof(sexo));
    fsalida.write(reinterpret_cast<char*>(&estado), sizeof(estado));

    size_t len = nombre.size();
    fsalida.write(reinterpret_cast<char*>(&len), sizeof(len));
    fsalida.write(nombre.c_str(), len);
}

bool Amigo::leerArchivo(ifstream& fentrada) {

    bool k = false;

    if (fentrada.is_open()) {

        size_t lenFecha;

        fentrada.read(reinterpret_cast<char*>(&lenFecha), sizeof(lenFecha));

        if (!fentrada.eof()) {

            char* bufferFecha = new char[lenFecha + 1];

            fentrada.read(bufferFecha, lenFecha);

            bufferFecha[lenFecha] = '\0';

            fechaNacimiento = bufferFecha;

            delete[] bufferFecha;

            fentrada.read(reinterpret_cast<char*>(&sexo), sizeof(sexo));
            fentrada.read(reinterpret_cast<char*>(&estado), sizeof(estado));

            size_t len;

            fentrada.read(reinterpret_cast<char*>(&len), sizeof(len));

            char* buffer = new char[len + 1];

            fentrada.read(buffer, len);

            buffer[len] = '\0';

            nombre = buffer;

            delete[] buffer;

            k = true;
        }
    }

    return k;
}

bool Amigo::buscar(ifstream& fentrada, int nroReg) {

    fentrada.clear();
    fentrada.seekg(0);

    for (int i = 1; i <= nroReg; i++) {

        if (!leerArchivo(fentrada)) {
            return false;
        }
    }

    return true;
}

bool Amigo::eliminar(fstream& fes, int nroReg) {
    return false;
}

bool Amigo::modificar(fstream& fes, int nroReg) {
    return false;
}

int Amigo::getTamBytesRegistro() {
    return 0;
}
