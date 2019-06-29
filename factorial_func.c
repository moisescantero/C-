//FUNCIÓN QUE CALCULA EL FACTORIAL DEL NÚMERO INTRODUCIDO POR EL USUARIO.
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int factorial (int num);
int main()
{
int a,c,d,num;
char b;

  printf("\n\n\t\tPulse un numero para calcular su factorial:");
  a=factorial(num);
  system("pause");
  system("cls");               
}    

int factorial(int num)
{
int a,b,res,res2;
fflush(stdin);
scanf("%d",&a);
system("cls");
b=a-1;
res=a*b;
b=b-1;
while(b!=0)
{
res=res*b;
--b;
}
printf("\n");
printf("\n");
printf("\t\tEl resultado factorial es: %d.\n",res);
printf("\n");
printf("\t\t");
}
