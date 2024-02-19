#include <iostream>

using namespace std;

int main() {
    float tasa_crecimiento = 1.03f;
    //Poblacion establecida en cifras de millones
    float poblacion_inicial = 8000.0f;
    float poblacion_actual = poblacion_inicial;
    float aumento_poblacion = 0.0f;
    float a�io = 2023.0f;
    float poblacion_meta = poblacion_inicial * 1.5f;

    cout << "A�o   " << "Poblacion mundial estimada   " << " tasa de crecimiento global (%)" << endl;
    cout << "      " << "En millones" << endl;

    while (poblacion_actual < poblacion_meta) {
        aumento_poblacion = poblacion_actual * (tasa_crecimiento / 100);
        poblacion_actual += aumento_poblacion;
        cout << anio++ << "      " << poblacion_actual << "                          " << aumento_poblacion << "%" << endl;
    }

    cout << " La poblaci�n ha superado la meta de " << poblacion_meta << " millones en el a�o " << anio - 1 << "." << endl;

    return 0;
}

