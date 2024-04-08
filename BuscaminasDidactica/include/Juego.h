//Libreria que guarda los atributos y los prototipos de los metodos utilizados para crear y administrar las celdas de juego
#ifndef JUEGO_H
#define JUEGO_H
#include "Tablero.h"
//La clase juego se establece para su uso
class Juego
{
private:
    //Un objeto de la clase Tablero que representa el tablero del juego.
	Tablero tablero;
	//El numero de minas dentro del juego
	int cantidadMinas;
//Numero de filas establecidad dentro de un rango de maximo y minimo
	int aleatorio_en_rango(int minimo, int maximo);
	int filaAleatoria();
	int columnaAleatoria();
public:
    //La inicializacion del de constructor del tablero dentro y las minas
    Juego(Tablero tablero, int cantidadMinas);
    //Colocacion de minas
	void colocarMinasAleatoriamente();
	//Solicitante al usuario de el numero de filas
	int solicitarFilaUsuario();
	//Se solicita el numero de columnas
	int solicitarColumnaUsuario();
	//Se establece si se ha ganado al usuario
	bool jugadorGana();
	//Se inicia el juego
	void iniciar();
	void dibujarPortada(string nombreArchivo);
};

#endif // JUEGO_H
