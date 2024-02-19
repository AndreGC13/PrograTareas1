#include <iostream>
//ejercicio 4.25 capitulo 4
using namespace std;
int main()
{
    int n;
    cout<<"Ingresa de que lado se inicializara el cuadrado: ";
    cin>>n;
    cout<<endl;
    for(int i=1;i<=n;i++)
        {
            cout<<"*";
    }
    cout<<endl;
    for(int j=1;j<=n-2;j++)
        {
            cout<<"*";
    for(int i=1;i<=n-2;i++)
        {cout<<" ";}
    cout<<"*"<<endl;}
    for(int i=1;i<=n;i++)
        {cout<<"*";
    }
    cout<<endl;
    return 0;
}
