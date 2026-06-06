#include <iostream>
#include <cmath>
using namespace std;

double solucionreal(int a, int b, int c, double& x2);
double solucionunica(int a, int b, int c);
double solucionimaginaria(int a, int b, int c, double& x2);
double discriminante(int a, int b, int c);

int main()
{
    int a, b, c;
    double d, x1, x2;

    cout << "Ingrese los coeficientes: " << endl;
    cin >> a >> b >> c;

    d = discriminante(a, b, c);

    if (d > 0) {
        x1 = solucionreal(a, b, c, x2);
        cout << "Las soluciones son x1= " << x1 << " x2= " << x2 << endl;
    }
    else if (d < 0) {
        x1 = solucionimaginaria(a, b, c, x2);
        cout << "Las soluciones imaginarias son: "
             << x1 << " + " << x2 << "i y "
             << x1 << " - " << x2 << "i" << endl;
    }
    else {
        x1 = solucionunica(a, b, c);
        cout << "La solucion es unica y es: " << x1 << endl;
    }

    return 0;
}

double discriminante(int a, int b, int c) {
    return (b * b - 4 * a * c);
}

double solucionreal(int a, int b, int c, double& x2) {
    double x = (-b + sqrt(b * b - 4 * a * c)) / (2.0 * a);
    x2 = (-b - sqrt(b * b - 4 * a * c)) / (2.0 * a);
    return x;
}

double solucionunica(int a, int b, int c) {
    return -b / (2.0 * a);
}

double solucionimaginaria(int a, int b, int c, double& x2) {
    double real = -b / (2.0 * a);
    x2 = sqrt(-(b * b - 4 * a * c)) / (2.0 * a);
    return real;
}
