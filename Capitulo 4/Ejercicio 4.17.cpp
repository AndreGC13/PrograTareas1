#include <iostream>
//Ejercicio de C++ del ejercicio 4.17
int main() {
    int contador = 1;
    int numero;
    int mayor = 0;
    std::cout << "¡Bienvenido al programa para determinar el mayor número de una serie!" << std::endl;
    while (contador <= 10) {
        std::cout << "Ingrese el número " << contador << ": ";
        std::cin >> numero;
        if (numero > mayor) {
            mayor = numero;
        }
        contador = contador + 1;
    }
    std::cout << "El mayor número de la serie es: " << mayor << std::endl;

    std::cout << "¡Gracias por usar el programa! ¡Hasta luego!" << std::endl;

    return 0;
}
