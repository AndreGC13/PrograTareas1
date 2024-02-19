#include <iostream>
#include <climits>

int main() {
    // Defino las variables
    int contador = 1;
    int numero;
    int primerMayor = INT_MIN;
    int segundoMayor = INT_MIN;

    // Mensaje de inicio
    std::cout << "¡Bienvenido al programa para encontrar los dos mayores de una serie de 10 números!" << std::endl;

    // Utilizo un bucle while para recibir la entrada y determinar los dos mayores
    while (contador <= 10) {
        // Solicito la entrada del número
        std::cout << "Ingresa el número " << contador << ": ";
        std::cin >> numero;

        // Actualizo los dos mayores
        if (numero > primerMayor) {
            segundoMayor = primerMayor;
            primerMayor = numero;
        } else if (numero > segundoMayor && numero != primerMayor) {
            segundoMayor = numero;
        }

        // Incremento el contador
        contador = contador + 1;
    }

    // Muestro los dos mayores
    std::cout << "Los dos mayores de la serie son: " << primerMayor << " y " << segundoMayor << std::endl;

    // Mensaje de despedida
    std::cout << "¡Gracias por usar el programa! ¡Hasta luego!" << std::endl;

    return 0;
}

