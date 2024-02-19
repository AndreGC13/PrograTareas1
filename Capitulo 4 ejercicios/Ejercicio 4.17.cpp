#include <iostream>
//Ejercicio de C++ del ejercicio 4.17
int main() {
    // Defino las variables
    int contador = 1;
    int numero;
    int mayor = 0;

    // Mensaje de bienvenida
    std::cout << "¡Bienvenido al programa para determinar el mayor número de una serie!" << std::endl;

    // Utilizo un bucle while para recibir la entrada y determinar el mayor
    while (contador <= 10) {
        // Solicito la entrada del número
        std::cout << "Ingrese el número " << contador << ": ";
        std::cin >> numero;

        // Verifico si el número ingresado es mayor que el actual valor de 'mayor'
        if (numero > mayor) {
            mayor = numero;
        }

        // Incremento el contador
        contador = contador + 1;
    }

    // Muestro el resultado
    std::cout << "El mayor número de la serie es: " << mayor << std::endl;

    // Mensaje de despedida
    std::cout << "¡Gracias por usar el programa! ¡Hasta luego!" << std::endl;

    return 0;
}
