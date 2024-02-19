#include <iostream>
//Eejrcicio 4.13 del capitulo 4 (kilometros de gasolina)
int main() {

    double distanciaRecorrida;
    double litrosConsumidos;
    double sumaDistanciaRecorrida = 0.0;
    double sumaLitrosConsumidos = 0.0;
    std::cout << "Bienvenido al programa de cálculo de rendimiento de combustible." << std::endl;
    while (true) {
        std::cout << "Ingrese la distancia recorrida en kilómetros (o ingrese un valor negativo para salir): ";
        std::cin >> distanciaRecorrida;
        if (distanciaRecorrida < 0) {
            break;
        }
        std::cout << "Ingrese la cantidad de litros de combustible consumidos: ";
        std::cin >> litrosConsumidos;
        sumaDistanciaRecorrida += distanciaRecorrida;
        sumaLitrosConsumidos += litrosConsumidos;
        double rendimientoKilometrosPorLitro = distanciaRecorrida / litrosConsumidos;
        std::cout << "Rendimiento en este reabastecimiento: " << rendimientoKilometrosPorLitro << " km por litro" << std::endl;
        double rendimientoTotalKilometrosPorLitro = sumaDistanciaRecorrida / sumaLitrosConsumidos;
        std::cout << "Rendimiento total hasta este punto: " << rendimientoTotalKilometrosPorLitro << " km por litro" << std::endl;
    }
    std::cout << "¡Hasta luego!" << std::endl;

    return 0;
}
