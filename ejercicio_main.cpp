#include <iostream>
#include "vector.h"

#define MAX 10

using namespace std;

int main() {

	int vec[MAX], n, op;
	vector vector1;
	do {
		cout << "Ingrese el tamanio del vector : ";
		cin >> n;
	} while ((n > MAX) || (n <= 0));
	do {
		cout << "-----       M E N U        -----" << endl;
		cout << "|1.- Cargar Vector.            |" << endl;
		cout << "|2.- Mostrar Vector.           |" << endl;
		cout << "|3.- Ordenar Vector.           |" << endl;
		cout << "|4.- Promediar Vector.         |" << endl;
		cout << "|0.- Salir                     |" << endl;
		cout << "--------------------------------" << endl;
		cout << " Elija una opcion" << endl;
		cin >> op;
		switch (op) {
		case 1:
			vector1.cargarVector(vec, n);
			break;
		case 2:
			vector1.mostrarVector(vec, n);
			break;
		case 3:
			vector1.ordenarVector(vec, n);
			break;
		case 4:
			vector1.promedio(vec,n);
		case 0:
			cout << "Salir" << endl;
			break;
		default:
			cout << "Error: Opcion no valida..." << endl;
			break;
		}
	} while (op != 0);
	return 0;
}
