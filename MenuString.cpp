#include <iostream>
#include <string>
using namespace std;

// ===== PROTOTIPOS =====
string invertirFrase(string texto);
string quitarVocales(string texto);
void intercambiarPalabras(string& a, string& b);
string sacarSubstring(string texto, int pos);
int contarVocales(string texto);
string quitarEspacios(string texto);
int encontrarCaracter(string texto, char c);
int longitudTexto(string texto);
bool compararTextos(string a, string b);

// ===== MAIN =====
int main()
{
    int opcion;

    do {
        cout << "\n===== MENU =====\n";
        cout << "1. Invertir frase\n";
        cout << "2. Quitar vocales\n";
        cout << "3. Intercambiar palabras\n";
        cout << "4. Sacar substring\n";
        cout << "5. Contar vocales\n";
        cout << "6. Quitar espacios\n";
        cout << "7. Encontrar caracteres\n";
        cout << "8. Longitud\n";
        cout << "9. Comparar\n";
        cout << "0. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;
        cin.ignore();

        string texto, texto2, resultado;
        int pos, resInt;
        char c;

        switch (opcion)
        {
        case 1:
            cout << "Ingrese texto: ";
            getline(cin, texto);
            cout << "Invertido: " << invertirFrase(texto) << endl;
            break;

        case 2:
            cout << "Ingrese texto: ";
            getline(cin, texto);
            cout << "Sin vocales: " << quitarVocales(texto) << endl;
            break;

        case 3:
            cout << "Texto 1: ";
            getline(cin, texto);
            cout << "Texto 2: ";
            getline(cin, texto2);
            intercambiarPalabras(texto, texto2);
            cout << "Texto 1: " << texto << endl;
            cout << "Texto 2: " << texto2 << endl;
            break;

        case 4:
            cout << "Ingrese texto: ";
            getline(cin, texto);
            cout << "Posicion: ";
            cin >> pos;
            cin.ignore();
            cout << "Substring: " << sacarSubstring(texto, pos) << endl;
            break;

        case 5:
            cout << "Ingrese texto: ";
            getline(cin, texto);
            cout << "Numero de vocales: " << contarVocales(texto) << endl;
            break;

        case 6:
            cout << "Ingrese texto: ";
            getline(cin, texto);
            cout << "Sin espacios: " << quitarEspacios(texto) << endl;
            break;

        case 7:
            cout << "Ingrese texto: ";
            getline(cin, texto);
            cout << "Caracter a buscar: ";
            cin >> c;
            cin.ignore();
            resInt = encontrarCaracter(texto, c);
            if (resInt != -1)
                cout << "Encontrado en posicion: " << resInt << endl;
            else
                cout << "No encontrado\n";
            break;

        case 8:
            cout << "Ingrese texto: ";
            getline(cin, texto);
            cout << "Longitud: " << longitudTexto(texto) << endl;
            break;

        case 9:
            cout << "Texto 1: ";
            getline(cin, texto);
            cout << "Texto 2: ";
            getline(cin, texto2);
            if (compararTextos(texto, texto2))
                cout << "Son iguales\n";
            else
                cout << "Son diferentes\n";
            break;

        case 0:
            cout << "Saliendo...\n";
            break;

        default:
            cout << "Opcion invalida\n";
        }

    } while (opcion != 0);

    return 0;
}

string invertirFrase(string texto)
{
    char aux;
    int n = texto.length();
    for (int i = 0; i < n / 2; i++) {
        aux = texto[i];
        texto[i] = texto[n - 1 - i];
        texto[n - 1 - i] = aux;
    }
    return texto;
}

string quitarVocales(string texto)
{
    string res = "";
    for (int i = 0; i < texto.length(); i++) {
        if (texto[i] != 'a' && texto[i] != 'e' &&
            texto[i] != 'i' && texto[i] != 'o' &&
            texto[i] != 'u' && texto[i] != 'A' &&
            texto[i] != 'E' && texto[i] != 'I' &&
            texto[i] != 'O' && texto[i] != 'U') {
            res += texto[i];
        }
    }
    return res;
}

void intercambiarPalabras(string& a, string& b)
{
    a.swap(b);
}

string sacarSubstring(string texto, int pos)
{
    if (pos >= 0 && pos < (int)texto.length())
        return texto.substr(pos);
    else
        return "Posicion invalida";
}

int contarVocales(string texto)
{
    int cont = 0;
    for (int i = 0; i < (int)texto.length(); i++) {
        if (texto[i] == 'a' || texto[i] == 'e' || texto[i] == 'i' || texto[i] == 'o' || texto[i] == 'u' ||
            texto[i] == 'A' || texto[i] == 'E' || texto[i] == 'I' || texto[i] == 'O' || texto[i] == 'U')
            cont++;
    }
    return cont;
}

string quitarEspacios(string texto)
{
    string res = "";
    for (int i = 0; i < (int)texto.length(); i++) {
        if (texto[i] != ' ')
            res += texto[i];
    }
    return res;
}

int encontrarCaracter(string texto, char c)
{
    int pos = texto.find(c);
    return (pos != (int)string::npos) ? pos : -1;
}

int longitudTexto(string texto)
{
    return texto.length();
}

bool compararTextos(string a, string b)
{
    return a.compare(b) == 0;
}
