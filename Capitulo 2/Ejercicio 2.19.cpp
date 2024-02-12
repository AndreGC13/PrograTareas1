#include <iostream>

int main() {
    // Se declaran las variables que se utilizaran durante el proceso del codigo
    int num1, num2, num3;
 // Mensaje de bienvenida
    std::cout << "Bienvenido a los resultados de diferentes operaciones con tres valores\n";

    // Entrada de los tres valores que utilizaran por parte del usuario
    std::cout << "Ingrese el primer entero: ";
    std::cin >> num1;

    std::cout << "Ingrese el segundo entero: ";
    std::cin >> num2;

    std::cout << "Ingrese el tercer entero: ";
    std::cin >> num3;

    // La suma de estos mismos adjuntando asi tambien el promedio y el producto de estos mismo, (calculos basico)
    int suma = num1 + num2 + num3;
    double promedio = static_cast<double>(suma) / 3;
    int producto = num1 * num2 * num3;

    // Se establece entre los numeros quien es el mayor y menor entre los 3
    int menor = num1 < num2 ? (num1 < num3 ? num1 : num3) : (num2 < num3 ? num2 : num3);
    int mayor = num1 > num2 ? (num1 > num3 ? num1 : num3) : (num2 > num3 ? num2 : num3);

    // El out de cada una de las operaciones anterior mente realizadas
    std::cout << "Suma: " << suma << std::endl;
    std::cout << "Promedio: " << promedio << std::endl;
    std::cout << "Producto: " << producto << std::endl;
    std::cout << "Menor: " << menor << std::endl;
    std::cout << "Mayor: " << mayor << std::endl;

    return 0;
}
