#include <iostream>

int main() {
    // Se declaran las variables que se quieren utilizar para poder llevar acabo la evaluacion de estos numeros en este caso
    int num1, num2, num3, num4, num5;

    // Se pide el ingreso por parte del usuario de los valores con los cuales se va trabajar
    std::cout << "Ingrese cinco enteros:\n";
    std::cin >> num1 >> num2 >> num3 >> num4 >> num5;

    // Determinar el entero mayor
    int mayor = num1;
    if (num2 > mayor) {
        mayor = num2;
    }
    if (num3 > mayor) {
        mayor = num3;
    }
    if (num4 > mayor) {
        mayor = num4;
    }
    if (num5 > mayor) {
        mayor = num5;
    }

    // Determinar el entero menor
    int menor = num1;

    if (num2 < menor) {
        menor = num2;
    }
    if (num3 < menor) {
        menor = num3;
    }
    if (num4 < menor) {
        menor = num4;
    }
    if (num5 < menor) {
        menor = num5;
    }
    // Se toma en cuenta que el primer numero que se imprime va ser el menor hasta que se determine que el igualitario sea el mayor o menor en ambos casos se aplica lo mismo
    // Imprimir resultados
    std::cout << "El entero mayor es: " << mayor << std::endl;
    std::cout << "El entero menor es: " << menor << std::endl;

    return 0;
}
