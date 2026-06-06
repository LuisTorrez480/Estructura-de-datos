#include <iostream>
using namespace std;
int opcion, a, b, n;
void numeropar(int n);//Prototipo de la funcion;
int main()
{
    do {
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
            cout << "la suma es " << a + b << endl;
            break;
        }
        case 2: {
            cout << "Ingrese el numero" << endl;
            cin >> a;
            if (a == 0)
                cout << "El numero es 0"<<endl;
            if (a > 0)
                cout << "El numero es positivo"<<endl;
            if (a < 0)
                cout << "El numero es negativo"<<endl;
            break;
        }
        case 3: {
            cout << "Ingrese n " << endl;
            cin >> n;
            cout << "los pares hasta " << n << " son: " << endl;
            for (int i = 1; i <= n; i++) {
                if (i % 2 != 0)
                    cout << i << endl;
            }
            break;
        case 4: {
            cout << "ingrese n" << endl;
            cin >> n;
            a = 1;
            for (int i = 2; i <= n; i++)
                a = a * i;
            cout << "el factorial de "<< n<<" es: " << a << endl;
                break;
        }
        case 5: {
            cout << "ingrese n" << endl;
            cin >> n;
            numeropar (n);
            break;
        }
        }
        case 0:
            cout << "saliendo..." << endl;
        default: {
            cout << "Intente de nuevo, opcion invalida" << endl;
            break;
        }
        }
    } while (opcion != 0);
    return 0;
}
void numeropar(int n){
            cout << "los pares hasta " << n << " son: " << endl;
            for (int i = 1; i <= n; i++) {
                if (i % 2 == 0)
                    cout << i << endl;
}
}
