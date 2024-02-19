#include <iostream>
#include <climits>
//Ejercicio 4.19 Capitulo 4
int main() {
    int contador = 1;
    int numero;
    int primerMayor = INT_MIN;
    int segundoMayor = INT_MIN;
    std::cout << "¡Bienvenido al programa para encontrar los dos mayores de una serie de 10 números!" << std::endl;
    while (contador <= 10) {
        std::cout << "Ingresa el número " << contador << ": ";
        std::cin >> numero;

        if (numero > primerMayor) {
            segundoMayor = primerMayor;
            primerMayor = numero;
        } else if (numero > segundoMayor && numero != primerMayor) {
            segundoMayor = numero;
        }

        contador = contador + 1;
    }

    std::cout << "Los dos mayores de la serie son: " << primerMayor << " y " << segundoMayor << std::endl;
    std::cout << "¡Gracias por usar el programa! ¡Hasta luego!" << std::endl;

    return 0;
}

