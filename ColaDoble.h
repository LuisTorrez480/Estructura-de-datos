// Ricardo Soruco 29/04/26
#pragma once
#include "NodoDoble.h"
class ColaDoble
{
private:
    Nodo* frente;
    Nodo* final;

public:
    ColaDoble();

    bool InsertarFrente(int dato);
    bool InsertarFinal(int dato);
    bool EliminarFrente();
    bool EliminarFinal();

    void VerFrente();
    void VerCola();
    void Tamanio();
    bool Vacia();
};
