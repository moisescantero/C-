//CÁLCULO DE PRIMOS ENTRE DOS LÍMITES QUE SE CAMBIAN POR EL USUSARIO
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
LIMINF=1;
LIMSUP=1000;
int main()
{
int primo (long int num)/*La función comienza aquí*/
{
int i,j,a,num2;
    if(num>=LIMINF&&num<=LIMSUP)/*si el número introducido es menor que 1 o mayor de 100000 NO ES VALIDO*/
    {     
     for (i=num-1;i>2;i--)
     {
      if(num%i==0)/*el número dividido entre el contador da 0 NO ES PRIMO*/
      {
      printf("El numero NO ES PRIMO.\n",i);
      system ("pause");
      return(0);
      }
     }
     if(num%i==1)
     {
      printf("El numero ES PRIMO.\n",i);
      printf("\n");
     }
      system("pause");  
      return (0);
     }
      
         
  else
       printf("El numero NO ES VALIDO.\n");
       system("pause");  
       return (0);
}
int tecla,a;
printf("Introduzca un numero:\n");
fflush(stdin);
scanf("%6d",&tecla);
system("cls");
printf("\n");
a=primo(tecla);

}
