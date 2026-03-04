#include <iostream>
#include <cmath>


double discriminante( int a,int b,int c );
double unica(int a,int b );
double solucionreal( int a,int b, int c,double d ,double& x2);
double solucionimag( int a,int b, int c,double d ,double& x2);

using namespace std;

int main()
{
    int a, b, c;
    double d,x1, x2;

    cout << "ingresar a: ";
    cin >> a;
    cout << "ingresar b: ";
    cin >> b;
    cout << "ingresar c: ";
    cin >> c;

    d = discriminante(a, b, c);
    if (d == 0) {
        cout << "la solucion unica es: " << unica(a, b);}
    else 
        if(d>0)
        {
            x1 = solucionreal(a, b, c, d, x2);
            cout << "x1 es: " << x1 << endl;
            cout << "x2 es : " << x2 << endl;
        }
        else{ x1 = solucionimag(a, b, c, d, x2);
    cout << "x1 es: " << x1<<"+"<<x2 <<"i" << endl;
    cout << "x2 es : " << x2 <<"+"<<x1<<"i"<< endl;
    }

    
}

double discriminante(int a, int b, int c){
    return b * b - 4 * a * c; }
double unica(int a, int b) {
    return -b / (2 * a); }
double solucionreal(int a, int b, int c, double d, double& x2) {
    double x1 = (-b + sqrt(d)) / (2 * a);
    x2 = (-b - sqrt(d)) / (2 * a);
    return x1; }
double solucionimag(int a, int b, int c, double d, double& x2){
    double x1 = -b / (2 * a);
    x2 = sqrt(-d) / (2 * a);
    return x1; }
