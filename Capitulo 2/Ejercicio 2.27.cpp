#include <iostream>
#include <cctype>

int main() {
    // En este caso solo se utiliza una variable que es caracter para poder establecer el valor que se solicita y que lo pase a entero como en la tabla ACSII
    char caracter;

    // Se ingresa el valor que se quiere transformar
    std::cout << "Ingrese un caracter: ";
    std::cin >> caracter;

    // Se verifica mediante isalnum y ispunct que tipo de caracter queremos utilizar
    if (std::isalnum(caracter) || std::ispunct(caracter)) {
        // Imprimir el equivalente
        std::cout << "El equivalente entero de '" << caracter << "' es: " << static_cast<int>(caracter) << std::endl;
    }
    return 0;
}

