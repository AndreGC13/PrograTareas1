#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

class Semestre {
private:
    string nombre;
    string nombresEstudiantes[5];
    float primerExamen[5];
    float segundoExamen[5];
    float tercerExamen[5];
    float notaTotal[5];

public:
    Semestre(string n) : nombre(n) {}

    void setNombreEstudiante(int indice, string nombreEstudiante) {
        nombresEstudiantes[indice] = nombreEstudiante;
    }

    void calcularNotas() {
        for (int i = 0; i < 5; ++i) {
            primerExamen[i] = rand() % 51 + 50;
            segundoExamen[i] = rand() % 51 + 50;
            tercerExamen[i] = rand() % 51 + 50;
            notaTotal[i] = (primerExamen[i] + segundoExamen[i] + tercerExamen[i]) / 3;
        }
    }

    void mostrarNotas() {
        cout << "Notas del semestre de " << nombre << ":" << endl;
        cout << "+-------------------------------------------------+" << endl;
        cout << "| Estudiante   | Examen 1 | Examen 2 | Examen 3 | Nota total |" << endl;
        cout << "+-------------------------------------------------+" << endl;
        for (int i = 0; i < 5; ++i) {
            cout << "| " << nombresEstudiantes[i] << " | ";
            cout << primerExamen[i] << "       | ";
            cout << segundoExamen[i] << "       | ";
            cout << tercerExamen[i] << "       | ";
            cout << notaTotal[i] << "       |" << endl;
        }
        cout << "+-------------------------------------------------+" << endl;
    }
};

int main() {
    srand(time(0));

    string nombres[5];

    cout << "Ingrese el nombre de los estudiantes del primer semestre:" << endl;
    for (int i = 0; i < 5; ++i) {
        cout << "Estudiante " << i + 1 << ": ";
        getline(cin, nombres[i]);
    }

    Semestre primerSemestre("Primer Semestre");
    Semestre segundoSemestre("Segundo Semestre");
    Semestre tercerSemestre("Tercer Semestre");

    for (int i = 0; i < 5; ++i) {
        primerSemestre.setNombreEstudiante(i, nombres[i]);
        segundoSemestre.setNombreEstudiante(i, nombres[i]);
        tercerSemestre.setNombreEstudiante(i, nombres[i]);
    }

    primerSemestre.calcularNotas();
    segundoSemestre.calcularNotas();
    tercerSemestre.calcularNotas();

    cout << "\n=== Resultados ===" << endl;
    primerSemestre.mostrarNotas();
    segundoSemestre.mostrarNotas();
    tercerSemestre.mostrarNotas();

    return 0;
}
