//Inclusionde las protecciones y librerias de las cuales se trabajaran
#ifndef TABLERO_H
#define TABLERO_H
#include <iostream>
#include <vector>
#include "Celda.h"

using namespace std;


class Tablero
{
    public:

        Tablero();
        //Se establece los parametros del tablero
        Tablero(int alturaTablero, int anchoTablero, bool modoDesarrollador);
        //Atributos privados
        int getAlturaTablero();
        int setAlturaTablero(int alturaTablero);
        int getAnchoTablero();
        int setAnchoTablero(int anchoTablero);
        bool getModoDesarrollador();
        bool setModoDesarrollador(bool modoDesarrollador);
        //Desarrollo y tablero
        void imprimirSeparadorEncabezado();
        void imprimirSeparadorFilas();
        void imprimirEncabezado();
        void imprimir();
        bool colocarMina(int x, int y);
        bool descubrirMina(int x, int y);
        //Cuentas las celdas que no tienen minas y las que no dentro
        int contarCeldasSinMinasYSinDescubrir();

    protected:
//Se establece dentro del tablero como se desenlaza
    private:
        int alturaTablero, anchoTablero;
        bool modoDesarrollador;
        vector<vector<Celda> > contenidoTablero;

        string getRepresentacionMina(int x, int y);
        int minasCercanas(int fila, int columna);
};

#endif // TABLERO_H
