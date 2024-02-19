#include <iostream>

int main() {
    // Inicializo las variables
    double ventasBrutasEnQuetzales;
    double porcentajeComision = 0.09; // Supongamos que la comisión es del 9%

    // Mensaje de bienvenida
    std::cout << "¡Bienvenido al programa de cálculo de ingresos en quetzales de vendedores!" << std::endl;

    // Utilizo un bucle while para recibir la entrada hasta que decida salir
    while (true) {
        // Solicito la entrada de las ventas brutas del vendedor en quetzales
        std::cout << "Ingrese las ventas brutas en quetzales del vendedor (o ingrese un valor negativo para salir): ";
        std::cin >> ventasBrutasEnQuetzales;

        // Verifico si el usuario desea salir
        if (ventasBrutasEnQuetzales < 0) {
            break;
        }

        // Calculo los ingresos del vendedor (ventas brutas * porcentaje de comisión)
        double ingresosEnQuetzales = ventasBrutasEnQuetzales * porcentajeComision;

        // Muestro los ingresos del vendedor en quetzales
        std::cout << "Los ingresos del vendedor en quetzales son: Q" << ingresosEnQuetzales << std::endl;
    }

    // Mensaje de despedida
    std::cout << "¡Hasta luego!" << std::endl;

    return 0;
}
