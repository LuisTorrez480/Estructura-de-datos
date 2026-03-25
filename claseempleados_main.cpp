#include "claseempleados.h"
int main() {
    Empleado e1("Juan", "Perez", "Analista");

    e1.mostrarInformacion();

    e1.cambiarCargo("Jefe de Proyecto");

    e1.corregirApellido("Perez-Ramirez");

    e1.mostrarInformacion();

    e1.depurarNombre();

    return 0;
}
