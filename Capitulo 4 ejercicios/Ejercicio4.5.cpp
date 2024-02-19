#include <iostream>
//Ejecucion y ejercicio del 4.5 capitulo 4
int main() {
    int x = 1; //Variable a utilizar

    int suma = 0;

    //La utilizacion de while para el bucle que se pide
    while (x <= 10) {
        // El valor con el cuanta x mas la suma
        suma += x;
        // Por esta parte incremento las veces de x en su interaccion
        x++;
    }

    // Resultado
    std::cout << "La suma de los numeros del 1 al 10 es igual a: " << suma << std::endl;

    return 0;
}
