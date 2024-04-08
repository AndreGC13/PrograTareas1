#ifndef CELDA_H
#define CELDA_H
//Libreria que guarda los atributos y los prototipos de los metodos utilizados para crear y administrar las celdas de juego
//Fecha: 17 marzo 2023

//Se establece la clase a trabajar
class Celda
{
    public:
        Celda();
        //Argumentos de los cuales se van a trabajar
        Celda(int coordenadaX, int coordenadaY, bool estadoMina);
        //Las coordenadas con las cuales se van a trabajar
        int setCoordenadaX(int coordenadaX);
        //Se obtiene las coordenas con las cuales se trabajar
        int getCoordenadaX();
        //D iguale manera con Y
        int setCoordenadaY(int coordenadaY);
        //Salidad de coordenadas de Y
        int getCoordenadaY();
        //Mina de la celdad x establecida dentro de ella
        bool setMina(bool estadoMina);
        //existe una mina dentro de la celda que se escoge
        bool getMina();
        bool setMinaDescubierta(bool minaDescubierta);
        //Se establece que se a encontrado una mina dentro de
        bool getMinaDescubierta();
        //Se imprime lo que se encuentra dentro de la celda tal:
        void imprimirCelda();
    protected:

    private:
        //Las coordenadas de las celdas dentro del tablero dado
        int coordenadaX, coordenadaY;
        //Pocesos establecidos en la parte de arriba
        bool mina, minaDescubierta;
};

#endif // CELDA_H
