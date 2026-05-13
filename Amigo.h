///Ricardo Soruco Amigo.h 12/05/26

#ifndef AMIGO_H
#define AMIGO_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Amigo {
private:
    string nombre;
    string fechaNacimiento;
    char sexo;
    char estado;

public:
    Amigo();
    Amigo(string nom, string fechaNac, char sx);

    void setAmigo(string nom, string fechaNac, char sx);

    string getNombre();
    string getFechaNacimiento();
    char getSexo();
    char getEstado();

    void guardarArchivo(ofstream& fsalida);
    bool leerArchivo(ifstream& fentrada);
    bool eliminar(fstream& fes, int nroReg);
    bool modificar(fstream& fes, int nroReg);
    bool buscar(ifstream& fentrada, int nroReg);

    int getTamBytesRegistro();
};

#endif
