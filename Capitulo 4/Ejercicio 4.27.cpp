#include <stdio.h>
#include <math.h>
#include <windows.h>
#include <conio.h>

using namespace std;

int main()
{
    int b2,x,res,r;
     char resp;
    do{
        system("cls");
        printf("Ingrese un numero B2: "); scanf("%d",&b2);
        x=0;res=0;

        do{
            r=b2%10; b2=b2/10;
            res=res+r*pow(2,x);
            x++;
          }while (b2!=0);
        printf("El numero en B10 es: %d\n",res);printf("\n");
        printf("Quiere probar otro numero s/n?"); resp=getch();
    }while ((resp=='s') || (resp=='S'));
    return 0;
}
