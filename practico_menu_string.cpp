#include <iostream>
#include <string>

using namespace std;

void invertirFrase(string n);
void quitarVocales(string n);
void intercambiarPalabras(string n);
void sacarSubstring(string n, int p, int l);
void contarVocales(string n);
void quitarEspacios(string n);
void encontrarCaracter(string n, char c);
void longitudCadena(string n);
void compararCadenas(string n1, string n2);

int main() {
    int n;
    int p, l;
    char c;

    do {
        cout << "menu" << endl;
        cout << "1 invertir frase" << endl;
        cout << "2 quitar vocales" << endl;
        cout << "3 intercambiar palabras" << endl;
        cout << "4 sacar un substring" << endl;
        cout << "5 contar vocales" << endl;
        cout << "6 quitar espacios" << endl;
        cout << "7 encotrar caracter" << endl;
        cout << "8 longitud" << endl;
        cout << "9 comparar" << endl;
        cout << "0 salir" << endl;
        cout << "Seleccione una opcion: ";
        cin >> n;
        cin.ignore();

        switch (n) {
            case 1: {
                string s;
                cout << "Ingrese frase: ";
                getline(cin, s);
                invertirFrase(s);
                break;
            }
            case 2: {
                string s;
                cout << "Ingrese frase: ";
                getline(cin, s);
                quitarVocales(s);
                break;
            }
            case 3: {
                string s;
                cout << "Ingrese frase: ";
                getline(cin, s);
                intercambiarPalabras(s);
                break;
            }
            case 4: {
                string s;
                cout << "Ingrese frase: ";
                getline(cin, s);
                cout << "Posicion: "; cin >> p;
                cout << "Longitud: "; cin >> l;
                sacarSubstring(s, p, l);
                break;
            }
            case 5: {
                string s;
                cout << "Ingrese frase: ";
                getline(cin, s);
                contarVocales(s);
                break;
            }
            case 6: {
                string s;
                cout << "Ingrese frase: ";
                getline(cin, s);
                quitarEspacios(s);
                break;
            }
            case 7: {
                string s;
                cout << "Ingrese frase: ";
                getline(cin, s);
                cout << "Caracter: "; cin >> c;
                encontrarCaracter(s, c);
                break;
            }
            case 8: {
                string s;
                cout << "Ingrese frase: ";
                getline(cin, s);
                longitudCadena(s);
                break;
            }
            case 9: {
                string n1, n2;
                cout << "Frase 1: ";
                getline(cin, n1);
                cout << "Frase 2: ";
                getline(cin, n2);
                compararCadenas(n1, n2);
                break;
            }
            case 0:
                cout << "Saliendo..." << endl;
                break;
            default:
                cout << "Opcion invalida" << endl;
                break;
        }
    } while (n != 0);

    return 0;
}

void invertirFrase(string n) {
    string r = "";
    for (int i = n.length() - 1; i >= 0; i--) r += n[i];
    cout << "Resultado: " << r << endl;
}

void quitarVocales(string n) {
    string r = "";
    for (char x : n) {
        char m = tolower(x);
        if (!(m == 'a' || m == 'e' || m == 'i' || m == 'o' || m == 'u')) r += x;
    }
    cout << "Resultado: " << r << endl;
}

void intercambiarPalabras(string n) {
    size_t p = n.find(' ');
    if (p != string::npos) {
        cout << "Resultado: " << n.substr(p + 1) << " " << n.substr(0, p) << endl;
    } else {
        cout << "Error: Se requieren dos palabras" << endl;
    }
}

void sacarSubstring(string n, int p, int l) {
    if (p < (int)n.length()) cout << "Resultado: " << n.substr(p, l) << endl;
    else cout << "Error de rango" << endl;
}

void contarVocales(string n) {
    int v = 0;
    for (char x : n) {
        char m = tolower(x);
        if (m == 'a' || m == 'e' || m == 'i' || m == 'o' || m == 'u') v++;
    }
    cout << "Total: " << v << endl;
}

void quitarEspacios(string n) {
    string r = "";
    for (char x : n) if (x != ' ') r += x;
    cout << "Resultado: " << r << endl;
}

void encontrarCaracter(string n, char c) {
    size_t p = n.find(c);
    if (p != string::npos) cout << "Posicion: " << p << endl;
    else cout << "No encontrado" << endl;
}

void longitudCadena(string n) {
    cout << "Longitud: " << n.length() << endl;
}

void compararCadenas(string n1, string n2) {
    if (n1 == n2) cout << "Iguales" << endl;
    else cout << "Diferentes" << endl;
}
