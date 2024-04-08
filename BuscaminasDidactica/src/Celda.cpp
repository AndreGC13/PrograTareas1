//libreria que guarda los atributos y los prototipos de los metodos utilizados para crear y administrar las celdas de juego
#include "Celda.h"
#include <iostream>
using namespace std;
Celda::Celda()
//Constructor establecido para los valores
{
}
//Parametros asignados con anterioridad para la clase celdas obteniendolas de donde se declararon
Celda::Celda(int coordenadaX, int coordenadaY, bool estadoMina)
{
    this->coordenadaX = coordenadaX;
    this->coordenadaY = coordenadaY;
    this->mina = estadoMina;
    this->minaDescubierta = false;
}
//Se realiza ida y vuelta de la informacion dentro de las coordenadas de X u Y y de la mina dentro de cada celda sea esta encontrada
int Celda::setCoordenadaX(int coordenadaX)
{
    this->coordenadaX = coordenadaX;
}
int Celda::getCoordenadaX()
{
    return this->coordenadaX;
}
int Celda::setCoordenadaY(int coordenadaY)
{
    this->coordenadaY = coordenadaY;
}
int Celda::getCoordenadaY()
{
    return this->coordenadaY;
}
bool Celda::setMina(bool estadoMina)
{
    if (this->getMina())
    {
        return false;
    }
    else{
        this->mina = estadoMina;
        return true;
    }
}
bool Celda::getMina()
{
    return this->mina;
}
bool Celda::setMinaDescubierta(bool minaDescubierta)
{
    this->minaDescubierta = minaDescubierta;
}
bool Celda::getMinaDescubierta()
{
    return this->minaDescubierta;
}
void Celda::imprimirCelda()
{
    //Se le revela al usuario la informacion de la celda
    cout << "Celda en " << this->coordenadaX << ", " << this->coordenadaY << " con mina? " << this->mina << "\n";
}


