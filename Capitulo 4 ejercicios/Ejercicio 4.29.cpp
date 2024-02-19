#include <iostream>
#include <cmath>
using namespace std;

int main() {
    // Mensaje de bienvenida
    cout << "¡Bienvenido al programa para calcular potencias de un número!" << endl;

    // Declaración de variables
    int base = 2;
    double resultado = 0;
    int exponente = 1;

    // Bucle do-while para calcular potencias sucesivas y mostrar los resultados
    do {
        resultado = pow(base, exponente++); // Calcula la potencia y actualiza el exponente

        // Imprime el resultado de la potencia
        cout << "Resultado de " << base << " elevado a la " << exponente - 1 << ": " << resultado << endl;

    } while (true); // Como lo decia en el inciso para que el bucle se volviera infinito

    return 0;
}
