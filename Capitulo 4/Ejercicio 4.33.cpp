#include <iostream>
//Ejercicio 4.33
int main() {

    std::cout << "¡Bienvenido al programa para verificar lados de un triángulo rectángulo!" << std::endl;

    int lado1, lado2, lado3;
    std::cout << "\nIngrese el primer lado: ";
    std::cin >> lado1;

    std::cout << "Ingrese el segundo lado: ";
    std::cin >> lado2;

    std::cout << "Ingrese el tercer lado: ";
    std::cin >> lado3;

    if (lado1 > 0 && lado2 > 0 && lado3 > 0) {
        if (lado3 * lado3 == lado1 * lado1 + lado2 * lado2 || lado1 * lado1 == lado2 * lado2 + lado3 * lado3 || lado2 * lado2 == lado1 * lado1 + lado3 * lado3) {
            std::cout << "Estos lados podrían formar un triángulo rectángulo." << std::endl;
        } else {
            std::cout << "Estos lados no forman un triángulo rectángulo." << std::endl;
        }
    } else {
        std::cout << "Ingrese tres enteros distintos de cero." << std::endl;
    }


    std::cout << "\n¡Finalizo el programa de verificacion de triangulo rectangulo ! " << std::endl;

    return 0;
}
