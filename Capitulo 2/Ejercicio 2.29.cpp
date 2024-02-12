#include <iostream>
//Esta biblioteca modifica el formato con el cual se va trabajar
#include <iomanip>
//Se deriva lo que se quiere operar dentro del rango dado
int main() {
    std::cout << "Bienvenido a la tabla de cuadrados y cubos en el rango del 1 al 100\n";
    std::cout << std::setw(10) << "Número" << std::setw(10) << "Cuadrado" << std::setw(10) << "Cubo" << std::endl;
//Se establece un rango mediante for para saber de donde a donde se trabaja
    for (int i = 0; i <= 100; ++i) {
        int cuadrado = i * i;
        int cubo = i * i * i;

        // Imprimir resultados
        std::cout << std::setw(10) << i << std::setw(10) << cuadrado << std::setw(10) << cubo << std::endl;
    }

    return 0;
}
