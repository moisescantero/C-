//FUNCIÓN QUE CALCULA EL MAYOR DE 2 NÚMEROS.
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
int mayor(int c);
int main ()
{
 int a,c;
 a=mayor(c);


}
int mayor (int c)
{
 int a,b;
    printf("Introduzca dos numeros enteros separados por un espacio: \n");
    fflush(stdin);
    scanf("%d %d",&a,&b);
    system("cls");        
    if (a>b)
    { 
     printf("El numero mayor es: %d.\n",a);
    }
    else
    {
     printf("\nEl numero mayor es: %d.\n",b);          
    }
    printf("\n");
    system("pause");
}
