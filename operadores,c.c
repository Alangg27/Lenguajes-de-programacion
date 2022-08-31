/***
Realizo: Alan Garcia
Fecha 23 de agosto 2022
manejo de operadores logicos y de relacion 
operadores.c

***/
#include<stdio.h> 

int main ()
{
//declaracion de variables
int A=5;
int B=7;

//Operaciones o codigo
printf("(A==B)&&(A<B)el resultado seria: %d\n", (A==B)&&(A<B));
printf("(A==5)||(A>7)el resultado seria: %d\n", (A==5)||(A>7));
printf("!(A==5) el resultado seria: %d", !(A==5));
return (0);
}
