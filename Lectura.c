/***
Realizo: Alan Garcia
Fecha 23 de agosto 2022

Lectura por teclado
Lectura.c
***/
#include<stdio.h> 

int main ()
{
	int val_1;
	int val_2;
	printf("vamos a capturar 2 valores y comparar si son iguales\n");
	printf("escribe el primer valor:");
	scanf("%d",&val_1);
	printf("0escribe el segundo valor:");
	scanf("%d",&val_2);
	if(val_1==val_2)
	{
		printf("los valores son iguales\n");
	}
	else if (val_1>val_2)
	{
		printf("el valor1 es mayor que el valor 2\n");
}
    else  
    {
    	printf("el valor2 es mayor que el valor 1\n");
    }
    return (0);
}

