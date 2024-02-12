#include <iostream>

int main() {
    // Mediante esto se declara las variables que se utilizaran para poder inicar el codigo
    int entero1, entero2, entero3;

    // La solitud de los tres enteros aplicables para este caso se pide de manera inmediata para cada uno
    std::cout << "Ingrese el primer entero: ";
    std::cin >> entero1;

    std::cout << "Ingrese el segundo entero: ";
    std::cin >> entero2;

    std::cout << "Ingrese el tercer entero: ";
    std::cin >> entero3;

    // Se enlaza las tres solicitudes anteriores para poder trabajar con ellas y sacar el producto de estas mismas
    int producto = entero1 * entero2 * entero3;

    // Dar el resultado sobre el codigo deseado
    std::cout << "Su producto final es: " " << entero1 << ", " << entero2 << " y " << entero3 << " es: " << producto << std::endl;

    return 0;
}
