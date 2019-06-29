#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int intermedio(int matriz[10][10]);
int main ()
{
 int a,matriz[10][10];
 a=intermedio(matriz[10][10]);
}
int intermedio(int matriz[][])
{
 int a,b,c;
 printf("\n");
 printf("Introduzca tres numeros enteros separados por un espacio: \n");
 printf("\n");    
 fflush(stdin);
 scanf("%d %d %d", &a,&b,&c);
 system("cls");
 
    if ((a>b && a<c) || (a<b && a>c))
    {
    printf("\n");
    printf("El numnero intermedio es: %d.\n",a);
    }
         
    else if ((b>a && b<c) || (b<a && b>c))
    {
    printf("\n");
    printf("El numero intermedio es: %d.\n",b);     
    }
    
    else if ((c>a && c<b) || (c<a && c>b))
    {
    printf("\n");
    printf("El numero intermedio es: %d.\n",c);
    }
    
 printf("\n");    
 system("pause");
}
