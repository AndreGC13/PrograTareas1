#include <iostream>
//Eejrcicio 4.13 del capitulo 4 (kilometros de gasolina)
int main() {
    // Inicializo las variables para el primer reabastecimiento
    double distanciaRecorrida;
    double litrosConsumidos;

    // Inicializo las sumas totales
    double sumaDistanciaRecorrida = 0.0;
    double sumaLitrosConsumidos = 0.0;

    // Inicio un mensaje de bienvenida al programa
    std::cout << "Bienvenido al programa de cálculo de rendimiento de combustible." << std::endl;

    // Utilizo un bucle while para recibir la entrada hasta que decida salir
    while (true) {
        // Solicito la entrada de la distancia recorrida en kilómetros
        std::cout << "Ingrese la distancia recorrida en kilómetros (o ingrese un valor negativo para salir): ";
        std::cin >> distanciaRecorrida;

        // Verifico si deseo salir del programa
        if (distanciaRecorrida < 0) {
            break;
        }

        // Solicito la entrada de litros de combustible consumidos
        std::cout << "Ingrese la cantidad de litros de combustible consumidos: ";
        std::cin >> litrosConsumidos;

        // Actualizo las sumas
        sumaDistanciaRecorrida += distanciaRecorrida;
        sumaLitrosConsumidos += litrosConsumidos;

        // Calculo y muestro el rendimiento para este reabastecimiento
        double rendimientoKilometrosPorLitro = distanciaRecorrida / litrosConsumidos;
        std::cout << "Rendimiento en este reabastecimiento: " << rendimientoKilometrosPorLitro << " km por litro" << std::endl;

        // Calculo y muestro el rendimiento total hasta este punto
        double rendimientoTotalKilometrosPorLitro = sumaDistanciaRecorrida / sumaLitrosConsumidos;
        std::cout << "Rendimiento total hasta este punto: " << rendimientoTotalKilometrosPorLitro << " km por litro" << std::endl;
    }

    // Muestro un mensaje de despedida
    std::cout << "¡Hasta luego!" << std::endl;

    return 0;
}
