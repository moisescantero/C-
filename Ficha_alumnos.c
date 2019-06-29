#include <stdio.h>
#include <stdlib.h>

int main()
{
int i=0, exit=0, cont=0, cont2=0,cont3=0, j;
char salir, menu;
struct ficha {
char apellido1[20];
char apellido2[20];
char nombre[20];
int edad;
float estatura;
float nota[5];
} alumno[10], auxiliar;
do
{
system ("cls");
printf ("Introduce una opcion\n\na) Insertar nombres\n\nb) Ordenar por apellido\n\nc) Mostrar nombres\n\ns) Salir\n\n");
fflush (stdin);
menu=getch();
switch (menu)
{
       case 'a':
       case 'A':
            {
            {
            do
            {
            printf ("Introduce el primer apellido\n");
            gets (alumno[i].apellido1);
            if (strcmp(alumno[i].apellido1,"salir")==0)
            {
            break;
            }
            printf ("Introduce el segundo apellido\n");
            gets (alumno[i].apellido2);
            printf ("Introduce el nombre\n");
            gets (alumno[i].nombre);
            printf ("Introduce la edad\n");
            fflush (stdin);
            scanf ("%d", &alumno[i].edad);
            printf ("Introduce la estatura\n");
            fflush (stdin);
            scanf ("%f", &alumno[i].estatura);
            printf ("Introduce la nota 1\n");
            fflush (stdin);
            scanf ("%f", &alumno[i].nota[0]);
            printf ("Introduce la nota 2\n");
            fflush (stdin);
            scanf ("%f", &alumno[i].nota[1]);
            printf ("Introduce la nota 3\n");
            fflush (stdin);
            scanf ("%f", &alumno[i].nota[2]);
            printf ("Introduce la nota 4\n");
            fflush (stdin);
            scanf ("%f", &alumno[i].nota[3]);
            printf ("Introduce la nota 5\n");
            fflush (stdin);
            scanf ("%f", &alumno[i].nota[4]);
            system ("cls");
            printf ("Nombre: %s %s %s\n", alumno[i].nombre, alumno[i].apellido1, alumno[i].apellido2);
            printf ("Presione cualquier tecla para seguir o ''S'' para salir\n");
            fflush (stdin);
            salir=getch();
            switch (salir)
            {
                   case 's':
                   case 'S':
                           {
                           exit=123;
                           }
            }
            cont=cont+1;
            cont3++;
            i=i+1;
            if (i==5)
               {
               break;
               }
            }
            
            while (exit!=123);
            }
                        
            cont2=0;
            do
                    {               
                    printf ("Nombre: %s %s %s\n", alumno[cont2].nombre, alumno[cont2].apellido1, alumno[cont2].apellido2);
                    cont2=cont2+1;
                    }
            while (cont!=cont2);
            cont--;
            break;
            }
                   case 'b':
                   case 'B':
                        {     
                        for (i=0;i<cont;i++)
                            for (j=i+1;j<cont+1;j++)
                                if (strcmp(alumno[i].apellido1,alumno[j].apellido1)>0)
                                {
                                auxiliar=alumno[i];
                                alumno[i]=alumno[j];
                                alumno[j]=auxiliar;
                                }
                        break;
                        }
                    case 'c':
                    case 'C':
                    {
                    cont2=0;
                    do
                      {               
                       printf ("Nombre: %s %s %s\n", alumno[cont2].nombre, alumno[cont2].apellido1, alumno[cont2].apellido2);
                       cont2=cont2+1;
                      }
                    while (cont3!=cont2);
                    system("PAUSE");
                    break;
                    }
                    case 's':
                    case 'S':
                    {
                    exit=234;
                    }
}
}
while (exit!=234);
system("PAUSE");	
   return 0;
 
} 
