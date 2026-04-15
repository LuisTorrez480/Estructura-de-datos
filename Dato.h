#pragma once 
#include <string>
using namespace std;
class Dato {
public:
    double Precio;
    string Nombre;
    string Genero;
    Dato() {
        Precio = 0;
        Nombre = "Unknow";
        Genero = "Unknow";
    }
};
