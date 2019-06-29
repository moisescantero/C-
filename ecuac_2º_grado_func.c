#include <stdlib.h>
#include <stdio.h>
#include <math.h>
float ecuac(float num);
int main ()
{
int a;
float num;
a=ecuac(num);

}

float ecuac(float num)
{
    int a,b,c,d,raiz,raiz1,raiz2;
    printf("\n");
    printf("Introduzca tres numeros enteros separados por un espacio: \n");
    printf("\n");
    fflush(stdin);
    scanf("%d %d %d",&a,&b,&c);
    system("cls");    
    if (a<=0)
    {
       if (b<=0)
       {
        if (c<=0)
        {
         printf("No es una ecuacion.\n");        
        }
        else
        {
         printf("No existe solucion.\n");
        }
       }
       else
       {
        raiz=(-c/b);
        printf("Existe una solucion: %d.\n",raiz);
       }  
      }
     else
     {
      d=((b*b)-(4*a*c));
      if (d<=0)
     {
      raiz=(-b/(2*a));
      printf("Existe una solucion: %d.\n",raiz);
     }
      else
      {
       if (d<0)
       {
        printf("No tiene soluciones reales.\n");
       }
       else
       {
        raiz1=((-b)+(sqrt(d))/(2*a));
        raiz2=((-b)-(sqrt(d))/(2*a));
        printf("Existen dos soluciones: %d y %d.\n",raiz1,raiz2);
       }
      }
     }
      printf("\n");    
      system("pause");
}
