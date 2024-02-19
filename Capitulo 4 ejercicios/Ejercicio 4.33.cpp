#include <iostream>
//Ejercicio 4.33
int main() {

    std::cout << "�Bienvenido al programa para verificar lados de un tri�ngulo rect�ngulo!" << std::endl;

    // Declaro las variables a utilizar en este programa
    int lado1, lado2, lado3;

    // Se le solicita los numero que no igualen a 0
    std::cout << "\nIngrese el primer lado: ";
    std::cin >> lado1;

    std::cout << "Ingrese el segundo lado: ";
    std::cin >> lado2;

    std::cout << "Ingrese el tercer lado: ";
    std::cin >> lado3;

    // Verificar si los lados podr�an formar un tri�ngulo rect�ngulo
    if (lado1 > 0 && lado2 > 0 && lado3 > 0) {
        // Verificar la condici�n de la f�rmula del teorema de Pit�goras que se razonaria como c^2 = a^2 + b^2 en este caso aplicado con los lados
        if (lado3 * lado3 == lado1 * lado1 + lado2 * lado2 || lado1 * lado1 == lado2 * lado2 + lado3 * lado3 || lado2 * lado2 == lado1 * lado1 + lado3 * lado3) {
            std::cout << "Estos lados podr�an formar un tri�ngulo rect�ngulo." << std::endl;
        } else {
            std::cout << "Estos lados no forman un tri�ngulo rect�ngulo." << std::endl;
        }
    } else {
        std::cout << "Ingrese tres enteros distintos de cero." << std::endl;
    }


    std::cout << "\n�Finalizo el programa de verificacion de triangulo rectangulo ! " << std::endl;

    return 0;
}
