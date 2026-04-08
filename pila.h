#pragma once
#define MAX 100
using TipoDato = int;
class Pila
{
private:
    int pila[MAX];
    int cima;

public:
    Pila();
    bool Apilar(TipoDato& elemento);
    bool Desapilar();
    bool CimaPila(TipoDato& elemento);
    void LimpiarPila();
    void VerPila();
    bool PilaVacia();
    bool Iguales(Pila p);
};
