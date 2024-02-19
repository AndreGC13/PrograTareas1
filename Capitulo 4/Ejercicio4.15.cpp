#include <iostream>
//Ejercicio 4.15 Capitulo4
int main() {
    double ventasBrutasEnQuetzales;
    double porcentajeComision = 0.09;
    std::cout << "¡Bienvenido al programa de cálculo de ingresos en quetzales de vendedores!" << std::endl;
    while (true) {
        std::cout << "Ingrese las ventas brutas en quetzales del vendedor (o ingrese un valor negativo para salir): ";
        std::cin >> ventasBrutasEnQuetzales;
        if (ventasBrutasEnQuetzales < 0) {
            break;
        }
        double ingresosEnQuetzales = ventasBrutasEnQuetzales * porcentajeComision;
        std::cout << "Los ingresos del vendedor en quetzales son: Q" << ingresosEnQuetzales << std::endl;
    }
    std::cout << "¡Hasta luego!" << std::endl;

    return 0;
}
