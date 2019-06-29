#include <stdio.h>
#include <stdlib.h>

int main()
{    
char tecla, v, s;
int c=0, d=0;
do
{
system ("cls");
printf ("--------------------------------\n");
printf ("|A)Para visualizar la opcion 1.|\n");
printf ("|B)Para visualizar la opcion 2.|\n");
printf ("|C)Para visualizar la opcion 3.|\n");
printf ("|D)Para visualizar la opcion 4.|\n");
printf ("|E)Para visualizar la opcion 5.|\n");
printf ("|S)Para salir del programa.    |\n");
printf ("--------------------------------\n");
printf ("\n");
printf ("Introduce una tecla del menu:\n");
fflush (stdin);
tecla=getch();
switch (tecla)
{
       case 'A':
       case 'a':     
            {
            printf ("Estoy haciendo la primera tarea\n");
            do
            {
            d=0;
            printf ("Presione la tecla V para volver\n");            
            fflush (stdin);
            v=getch();
            system ("cls");
                  switch (v)
                  {
                         case 'v':
                         case 'V':
                              break;
                         default:
                              printf("La tecla pulsada no es valida\n");
                              d=d+1;
                              continue;
                  }
            }
            while (d==1);                     
            break;        
            }   
       case 'b':
       case 'B':
            {
            printf ("Estoy haciendo la segunda tarea\n");
            do
            {
            d=0;
            printf ("Presione la tecla V para volver\n");            
            fflush (stdin);
            v=getch();
            system ("cls");
                  switch (v)
                  {
                         case 'v':
                         case 'V':
                              break;
                         default:
                              printf("La tecla pulsada no es valida\n");
                              d=d+1;
                              continue;
                  }
            }
            while (d==1);                     
            break;        
            }
       case 'c':
       case 'C':
            {
            printf ("Estoy haciendo la tercera tarea\n");
            do
            {
            d=0;
            printf ("Presione la tecla V para volver\n");            
            fflush (stdin);
            v=getch();
            system ("cls");
                  switch (v)
                  {
                         case 'v':
                         case 'V':
                              break;
                         default:
                              printf("La tecla pulsada no es valida\n");
                              d=d+1;
                              continue;
                  }
            }
            while (d==1);                     
            break;        
            }
       case 'd':
       case 'D':
            {
            printf ("Estoy haciendo la cuarta tarea\n");
            do
            {
            d=0;
            printf ("Presione la tecla V para volver\n");            
            fflush (stdin);
            v=getch();
            system ("cls");
                  switch (v)
                  {
                         case 'v':
                         case 'V':
                              break;
                         default:
                              printf("La tecla pulsada no es valida\n");
                              d=d+1;
                              continue;
                  }
            }
            while (d==1);                     
            break;        
            }
       case 'e':
       case 'E':
            {
            printf ("Estoy haciendo la quinta tarea\n");
            do
            {
            d=0;
            printf ("Presione la tecla V para volver\n");            
            fflush (stdin);
            v=getch();
            system ("cls");
                  switch (v)
                  {
                         case 'v':
                         case 'V':
                              break;
                         default:
                              printf("La tecla pulsada no es valida\n");
                              d=d+1;
                              continue;
                  }
            }
            while (d==1);                     
            break;        
            }
       case 's':
       case 'S':
            c=1;
            break;
       default:
            printf ("La variable no es valida\n");     
            break;
}            
}
while (c!=1);
   system("PAUSE");	
   return 0;
}

