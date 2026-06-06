//autor:Ricardo Soruco
//fecha:18/02
#include <iostream>
using namespace std;
int opcion, a, b, n;
void numeropar(int n);//Prototipo de la funcion;
int suma(int a, int b);
void impares(int n);
void positivo(int a);
void factorial(int n);
int main()
{
    do {
        cout << "***MENU***" << endl;
        cout << "Hola, elija una opcion" << endl;
        cout << "presiona 1 para sumar dos numeros" << endl;
        cout << "presiona 2 para ver si un numero es positivo, negativo o 0" << endl;
        cout << "presiona 3 para mostrar los numeros impares hasta n" << endl;
        cout << "presiona 4 para mostrar el factorial de n" << endl;
        cout << "presiona 5 para mostrar los numeros pares hasta n" << endl;
        cout << "presiona 0 para salir" << endl;
        cin >> opcion;
        switch (opcion) {
        case 1: {
            cout << "Ingrese dos numeros" << endl;
            cin >> a >> b;
           int c= suma(a, b);
            break;
        }
        case 2: {
            cout << "Ingrese el numero" << endl;
            cin >> a;
            positivo(a);
            break;
        }
        case 3: {
            cout << "Ingrese n " << endl;
            cin >> n;
            cout << "los impares hasta " << n << " son: " << endl;
            impares(n);
            break;
        }
        case 4: {
            cout << "ingrese n" << endl;
            cin >> n;
            factorial(n);
            break;
        }
        case 5: {
            cout << "ingrese n" << endl;
            cin >> n;
            numeropar(n);
            break;
        }
        case 0:
            cout << "saliendo..." << endl;
            break;
        default: {
            cout << "Intente de nuevo, opcion invalida" << endl;
            break;
        }
        }
    }while (opcion != 0);
    return 0;
}
void numeropar(int n) {
    cout << "los pares hasta " << n << " son: " << endl;
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0)
            cout << i << endl;
    }
}
int suma(int a, int b) {
    cout << "la suma es " << a + b << endl;
        return a+b;
}
void impares(int n) {
    for (int i = 1; i <= n; i++) {
        if (i % 2 != 0)
            cout << i << endl;
    }
}
    void positivo(int a) {
        if (a == 0)
            cout << "El numero es 0" << endl;
        if (a > 0)
            cout << "El numero es positivo" << endl;
        if (a < 0)
            cout << "El numero es negativo" << endl;
    }
    void factorial(int a) {
        a = 1;
        for (int i = 2; i <= n; i++)
            a = a * i;
        cout << "el factorial de " << n << " es: " << a << endl;
    }
