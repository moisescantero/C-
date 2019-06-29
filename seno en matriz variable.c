#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int COLMAX=15;
int FILAMAX=6;
float relleno(float matriz[COLMAX][FILAMAX]);
float presentar(float matriz[COLMAX][FILAMAX]);
int main()
{
 int i,j,fila,col,filcol;
 float a,b,c,matriz[COLMAX][FILAMAX];
 a=relleno(matriz);
 b=presentar(matriz);
 printf("\n");
 system("pause");
    



}

float relleno(float matriz[COLMAX][FILAMAX]) /*Tipo de función, nombre de la misma y tipo de variable con su valor, AQUÍ NO HACE FALTA (;)*/
{
 float a,b,seno,PI=3.141516;
 int i,j;
 for(i=0;i<FILAMAX;++i)
 {
  printf("\n");
  for(j=0;j<COLMAX;++j)
  {
   a=a+0.5;                                         
   printf("%.2f",a);
   seno=a/PI;
   printf("\t%.3f\n",seno); 
   matriz[j][i]=b;/*b=valor de la posición de i y j del vector matriz*/
  }
 }
}

float presentar(float matriz[FILAMAX][COLMAX])
{
 float a,b;
 int i,j;
 for(i=0;i<FILAMAX;++i)
 {
  printf("\t\t");
  for(j=0;j<COLMAX;++j)
  {
   a=matriz[j][i];
  }
 }

}
