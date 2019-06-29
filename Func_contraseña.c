//FUNCIÓN PIDE NÚMERO Y LUEGO COMPRUEBA VOLVIENDO A PEDIR SI SON IGUALES (CONTRASEÑA).
#include <stdio.h>
#include <stdlib.h>
int contra(int b);
int main()
{
int a,b;
a=contra(b);
}
int contra(int b)
{
int contra, contra1; 
   
   scanf ("%d", &contra1);
   system ("cls");
   do
   {
   printf("Introduce la contrasena:\n");
   printf("\n");
   scanf ("%d", &contra);
   system("cls");
   printf("Ha escrito: %d\n", contra);
   printf("\n");
    if (contra!=contra1)
    {
     printf ("La contrasena introducida esta mal.\n");
     break;
    }
    else
    { 
     printf ("La ha escrito bien.\n");
     printf("\n");
     printf ("Ha descubierto el password.\n");
    }
   }
   while (contra!=contra1); 
   printf("\n");     
   system("PAUSE");	
   return 0;
}
