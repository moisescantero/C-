#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<conio.h>
int main ()
{
  float a,LIM=0,LIM1=100,contador,max=50;
  printf("\n");
  printf("Introduzca un numero de 0 a 100: \n");
  printf("\n");
    
  do
  {
  fflush(stdin);
  scanf("%f",&a);
  system("cls"); /*esto con librería conio.h, con stdlib.h system("cls");*/
  contador++; /*incrementa contador en uno hasta que llegue a 50*/
  printf("\n");
  printf("El numero que ha introducido es: %f.\n",a);
  printf("\n");
  if(contador==max)
  {
   printf("Ha llegado a 50 numeros introducidos.\n");
   system("pause");
  }
  
  }while (contador<max && LIM<a && a<LIM1);
  printf("\n");
  
  
  printf("El numero no esta entre 0 y 100 o ha llegado a 50 numeros introducidos.\n");



 system("pause"); /*esto con librería conio.h, con stdlib.h system("pause");*/
 return 0;

}
