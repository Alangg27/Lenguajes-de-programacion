/***
Realizo: Alan Garcia
Fecha 23 de agosto 2022
Tablas de verdad
operadores.c

***/
#include<stdio.h> 

int main ()
{
int	A=0;
int B=0;

printf("Tabla de verdad And &&\n");
printf("A=%d && B=%d = %d\n",A,B,A&&B);
printf("A=%d && B=%d = %d\n",A,!B,A&&!B);
printf("A=%d && B=%d = %d\n",!A,B,A&&B);
printf("A=%d && B=%d = %d\n",!A,!B,!A&&!B);
Printf("Tabla de verdar OR ||\n");
Printf("A      B\n");
printf("%d || %d = %d\n",A,B,A||B);
printf("%d || %d = %d\n",A,!B,A||!B);
printf("%d || %d = %d\n",!A,B,!A||B);
printf("%d || %d = %d\n",!A,!B,!A||!B);


return (0);
}
