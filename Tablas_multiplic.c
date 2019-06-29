#include<stdlib.h>
#include<stdio.h>
#include<math.h>
int FILAMAX=10;//NO CAMBIAR FILAMAX O COLMAX, SE DESCOLOCA MATRIZ
int COLMAX=10;
float relleno(float matriz[FILAMAX][COLMAX]);
int main()
{
 int i,j,fila,col,filcol;
 float a,b,c,matriz[FILAMAX][COLMAX];
 a=relleno(matriz);
 printf("\n\n\n\n\n\n");

}

float relleno(float matriz[FILAMAX][COLMAX]) /*Tipo de función, nombre de la misma y tipo de variable con su valor, AQUÍ NO HACE FALTA (;)*/
{
int i,j,resultado;
printf("\n");
printf("\t\t\tTablas de multiplicacion del 1 al 9\n");
printf("\n");
printf("\n");


    for (i=1;i<FILAMAX;++i)/*bucle que hace las líneas*/
    {    
        for(j=1;j<COLMAX;++j)/*bucle que hace las columnas*/
        {
        resultado=i*j;/*resultado de multiplicar líneas por columnas*/
        printf("\t%d",resultado);/*imprime en pantalla el resultado de la línea de código de arriba*/
        }
    printf("\t");/*mantiene los numeros separados y alineados*/
    }
printf("\n");/*imprime avance de línea y retorno de carro*/
system("pause");/*pausa el programa a la espera de pulsar una tecla*/
}
