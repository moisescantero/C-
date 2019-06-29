//PIDE AL USUARIO 15 NOTAS A GUARDAR Y HACE MEDIA, ORDENAR DE MAYOR A MENOR Y NÚMEROS DE APROBADOS Y SUSPENSOS.
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int FILAMAX=10;//NO CAMBIAR FILAMAX O COLMAX, SE DESCOLOCA MATRIZ
int COLMAX=10;
float relleno(float matriz[FILAMAX][COLMAX]);
float vector2 (float a[]); /*prototipo función que rellena el vector*/
float media(float b[]);/*Los [] lo hacen vector*/
float aprobados(float c[]);
float burbuja(float d[]);
int i,a;
int main()
{
float vec[3][3];/*definido vector de 15 posiciones*/
float a,b,c,d;

{
c=vector2(vec);/*llamada a la función para rellenar el vector de 15 posiciones*/
fflush(stdin);
printf("Las notas son: %f \n",c);
 for(i=0;i<3;++i)
 {           
  printf(" %.1f ",vec[i]);/*imprimir directamente el valor que hay en la posición dada por 'i' del vector 'vec'*/
 }
}  

printf("\n");
printf("\n");    
b=media(vec);/*llamada a la función que hace la media de los 15 valores del vector*/
printf("La media del vector es: %f ", b);
printf("\n");
printf("\n");
a=aprobados(vec);
printf("\n");
printf("El vector ordenado es:\n");
printf("\n");
d=burbuja(vec);
printf("\n");
printf("\n");
system("pause");
}
float vector2(float a[]) /*Tipo de función, nombre de la misma y tipo de variable con su valor, AQUÍ NO HACE FALTA (;)*/
{
 float b;
 for(i=0;i<15;++i)
 {  
 printf("Introduzca las 15 notas para calcular las operaciones:\n");                                          
 scanf("%f",&b);//Pide 15 notas a introducir por el usuario.
 a[i]=b;/*b=valor de la posición de i del vector a*/
 system("cls");
 }
 printf("\n");
}

float media(float vector[])/*función que hace la media con los valores de la de arriba*/
{
 float c,d;
 int j;
 c=0; 
 for(j=0;j<15;++j)
  {
   c=c+vector[j];/*para acceder al vector [], opera con los datos de la posición del vector que nos da 'j'*/
  }
  d=c/15.0;/*la suma acumulativa del bucle for de arriba se divide entre 15.0(por ser float) y almacenamos en 'd' el valor de la operación*/
  return d;/*devolvemos desde la función hasta la llamada de la misma en el programa principal el valor de la operación 'd'*/
}

float aprobados(float vector[])/*función que dice cuantos aprobados y suspensos hay,coje cada posición del vector 0-15(float a[])*/
{
 float d;
 int susp=0,aprob=0,k;//SE OPERAN CON LOS DATOS QUE HAY EN FLOAT VECTOR[]
 for(k=0;k<15;k++)
 {
  d=d+vector[k];/*lo que hay en la posición del vector k*/
  if(vector[k]<5)
  {
  susp=susp+1;
  }
  else
  {
  aprob=aprob+1;
  }
 }
  printf("El numero de suspensos es: %d.\n",susp);
  printf("El numero de aprobados es: %d.\n",aprob);
}

float burbuja(float vector[])
{
 float e;
 int a,i,j,aux;
 for(i=0;i<15;i++)//cantidad de valores que aparecen ordenados(15 valores del 10.0 al 0.0)
 {
  for(j=0;j<16-i;j++)//bucle que compara los datos del vector
  {
   if(vector[j]>vector[j+1])//si dato de posición anterior es mayor que la siguiente superior los cambia
   {
    aux=vector[j];
    vector[j]=vector[j+1];
    vector[j+1]=aux;
   }
  }                       
  printf(" %.1f ",vector[j]);
 }
}
