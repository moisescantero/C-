//FUNCIÓN QUE CALCULA EL MAYOR DE 3 NÚMEROS HASTA UN LÍMITE.
#include <stdlib.h>
#include <conio.h>
int comp(int e);//prototipo de la función.
int LIM=999;
int main ()
{
 int d,e;
 d=comp(e);//llamada a la función.
}

int comp(int e)//comienzo de la función.
{
int a, b, c, min, max;
printf ("Introduce 3 variables:\n");
scanf ("%d", &a);
 if (a<LIM)
scanf ("%d", &b);
 if (b<LIM)
scanf ("%d", &c);
 if (c<LIM)
 if (a>b)
 {
  if (a>c)
  max=a;
  else
  max=c;
 }         
 else
 {
  if (b>c)
  max=b;
  else
  max=c;
 }

 if(max<LIM||min<LIM)
 {
system("cls");
printf ("El valor maximo es:%d.\n", max);
printf("\n");        
 if (a<b)
 {
  if (a<c)
  min=a;
  else
  min=c;
 }
 else
 {
  if (b<c)
  min=b;
  else
  min=c;
 }
printf ("El valor minimo es:%d.\n", min);
 }
 if(max>LIM||min>LIM)
 {
  system("cls");
  printf("\n");
  printf("VARIABLES FUERA DE LIMITE.\n");
 }
printf("\n");   
system ("PAUSE");
return 0;
}//Final de la función.
