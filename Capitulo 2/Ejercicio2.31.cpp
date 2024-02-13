#include <iostream>

int main() {
    //  variables
    double totalKilometros, costoGasolina, cuotasEstacionamiento, peaje;

    // Se le pide que ingrese los valores al usuario
    std::cout << "Ingrese el total de kilómetros conducidos por dia hacia el trabajo: ";
    std::cin >> totalKilometros;

    std::cout << "Ingrese el costo por litro de gasolina en quetzales para su total: ";
    std::cin >> costoGasolina;

    std::cout << "Ingrese las cuotas de estacionamiento por dia en quetzales: ";
    std::cin >> cuotasEstacionamiento;

    std::cout << "Ingrese el peaje por dia en quetzales si es que utiliza, en dado caso no ingrese 0: ";
    std::cin >> peaje;

    // Cálculo del costo diario
    double costoDiario = (totalKilometros / totalkilometrosdias 12) * costoGasolina + cuotasEstacionamiento + peaje;

    // Resultado en quetzales
    std::cout << "El costo diario por conducir al trabajo es de: " << costoDiario << " quetzales" << std::endl;

    return 0;
}

