#include <iostream>
using namespace std;
int main()
{
    //Declaracion de la variable n para poder empezar a trabajar
    int n;
    //Le indico al usuario mediante la peticion de cout el lado a ingresar del cuadrado
    cout<<"Ingresa de que lado se inicializara el cuadrado: ";
    cin>>n;
    cout<<endl;

    //Se inicia el ciclo for para poder determinar las lineas del cuadro
    for(int i=1;i<=n;i++)
        {
            cout<<"*";
    }
    cout<<endl;
    //Segundo for para utilidad del mensaje deseado en cuanto a la linea vertical del cuadrado
    for(int j=1;j<=n-2;j++)
        {
            cout<<"*";
    //Ambos for para la creacion del cuadrado de partes de abajo
    for(int i=1;i<=n-2;i++)
        {cout<<" ";}
    cout<<"*"<<endl;}
    for(int i=1;i<=n;i++)
        {cout<<"*";
    }
    cout<<endl;
    return 0;
}
