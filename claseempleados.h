#include <string>
using namespace std;
class Empleado
{
private:
    string nombre;
    string apellido;
    string correo;
    string cargo;

public:
    Empleado(string n, string a, string c);
    void generarCorreo();
    void mostrarInformacion();
    void cambiarCargo(string nuevoCargo);
    void corregirApellido(string nuevoApellido);
    void depurarNombre();
};
