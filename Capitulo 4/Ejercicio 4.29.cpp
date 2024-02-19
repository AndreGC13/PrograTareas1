#include <iostream>
#include <cmath>
//Ejercicio 4.29 capitulo 4
using namespace std;

int main() {
    cout << "¡Bienvenido al programa para calcular potencias de un número!" << endl;
    int base = 2;
    double resultado = 0;
    int exponente = 1;
    do {
        resultado = pow(base, exponente++);
        cout << "Resultado de " << base << " elevado a la " << exponente - 1 << ": " << resultado << endl;

    } while (true);

    return 0;
}
