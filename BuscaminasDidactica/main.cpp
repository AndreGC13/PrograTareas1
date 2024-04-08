//Bibliotecas con las cuales se esta trabajando dentro del programa
#include <iostream>
#include <unistd.h>
//Clases de las cuales se esta apoyando el programa
#include "Juego.h"
#include "Config.h"

using namespace std;

int main()
{
    //Defimicion de las constantes que se utilizaran denttro del programa ya sea como diseño y mas uitilidades
    const int FILASTABLERO = 5;
    const int COLUMNASTABLERO = 5;
    const int MINASENTABLERO = 3;
    const bool MODODESARROLLADOR = true;
    const int VIDASTABLERO = 3;
    //Configuraciones de las que se apoya el juego para poder correr
    Config configuracionJuego(FILASTABLERO, COLUMNASTABLERO, MINASENTABLERO, MODODESARROLLADOR, VIDASTABLERO);
    //Se le muestra al usuario el menu de opcion
    Juego juego(Tablero(configuracionJuego.getfilasTablero(), configuracionJuego.getcolumnasTablero(), configuracionJuego.getmodoDesarrolladorTablero()), configuracionJuego.getminasTablero());
    srand(getpid());
    int opciones;
    bool repetir = true;
    do
    {
        system("cls");
        //Se crea la impresion de las opciones para el usuario y se presentan en pantalla
        cout << "\n\n\t\tBUSCA MINAS -Menu-" << endl;
        cout << "\t\t-------------------"<< endl;
        cout << "\t\t1. Configuaracion del Juego" << endl;
        cout << "\t\t2. Iniciar el Juego" << endl;
        cout << "\t\t3. Salir del Juego" << endl;
        cout << "\n\t\tIngrese una opcion: ";
        cin >> opciones;
        switch (opciones)
        {
            //Establecimiento de las configuraciones del juego
        case 1:
            {
                configuracionJuego.menuConfiguracion();
                break;
            }
        case 2:
            {
                //mediante donde se sale e inicia el juego
              	Juego juegoTemporal(Tablero(configuracionJuego.getfilasTablero(), configuracionJuego.getcolumnasTablero(), configuracionJuego.getmodoDesarrolladorTablero()), configuracionJuego.getminasTablero());
                juegoTemporal.iniciar();

                system("pause");
                break;
            }
            //Se realiza de nuevo o se rompe la continuacion mediante la utilizacion de un ciclo while
        case 3: repetir = false;
                break;
        }
    } while (repetir);
    system("cls");
    return 0;
}
