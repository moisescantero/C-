#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int FILAMAX=5;
int COLMAX=4;
float relleno(float matriz[FILAMAX][COLMAX]);
float presentar(float matriz[FILAMAX][COLMAX]);
int main()
{
 int i,j,fila,col,filcol;
 float a,b,c,matriz[FILAMAX][COLMAX];
 a=relleno(matriz);
 printf("\n\n\n\n\n\n");
 b=presentar(matriz);
printf("\n\n");
system("pause");
}

float relleno(float matriz[FILAMAX][COLMAX]) /*Tipo de función, nombre de la misma y tipo de variable con su valor, AQUÍ NO HACE FALTA (;)*/
{
 float b;
 int i,j;
 for(i=0;i<COLMAX;++i)
 {
  for(j=0;j<FILAMAX;++j)
  {                   
   b=rand()%11; /*escoge números aleatorios entre 0.0 y 10.0*/
   matriz[j][i]=b;/*b=valor de la posición de i y j del vector matriz*/
  }
 }
 printf("\n");
}

float presentar(float matriz[FILAMAX][COLMAX])
{
 float a;
 int k,l;
 for(k=0;k<FILAMAX;++k)
 {
  printf("\t\t");
  for(l=0;l<COLMAX;++l)
  {
   a=matriz[l][k];
   printf("\t%.2f ",a);
  }
  printf("\n");
 }

}
