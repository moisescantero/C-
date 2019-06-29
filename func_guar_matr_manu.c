#include<stdio.h>
#include<stdlib.h>
#include<math.h>
char FILAMAX=14;
char COLMAX=14;
char relleno(char matriz[FILAMAX][COLMAX]);
float presentar(float matriz[FILAMAX][COLMAX]);
float burbuja(float vector[]);
float media(float matriz[FILAMAX][COLMAX]);
int main()
{
 
 int i,j,fila,col,filcol;
 float b,c,d;
 char a,matriz[FILAMAX][COLMAX];
 a=relleno(matriz);
 printf("\n\n\n\n\n\n");
 printf("%c",a);
 
 













printf("\n\n");
system("pause");
}

char relleno(char matriz[FILAMAX][COLMAX]) /*Tipo de función, nombre de la misma y tipo de variable con su valor, AQUÍ NO HACE FALTA (;)*/
{
 char b,a;
 int i,j; 
 for(i=0;i<10;i++)
 {
  for(j=0;j<10;j++)
  {    
   printf("Introduzca las notas:\n");                    
   scanf("%c",&b);//Pide 15 notas a introducir por el usuario.
   matriz[j][i]=b;/*b=valor de la posición de i y j del vector matriz*/
   a=b;  
   system("cls");
   
  }
 }
 system("cls");
 printf("\n");
}

float presentar(float matriz[FILAMAX][COLMAX])
{
 float a;
 int i,j;
 for(i=0;i<FILAMAX;++i)
 {
  printf("\t\t");
  for(j=0;j<COLMAX;++j)
  {
   a=matriz[j][i];
   printf("\t%.2f ",a);
  }
  printf("\n");
 }
}



