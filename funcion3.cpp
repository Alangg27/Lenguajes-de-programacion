/*programa para calcular por medio de una funcion la suma de todos los numeros entre 0 y 100
regresando la suma en la variable acumulada 
para imprimirla despues dentro del main
*/
#include <stdio.h>
#include <math.h>

int sumar()
{
	int final=0;
	int i;
	for (i=0;i<=100;i++)
    {
	final=final+1;
}
	return final;
}

int main ()
{
	int final;
	int sumar;
	printf("programa para calcular la suma de todos los numeros del 0 al 100\n\n");
	final=sumar;
	printf("el resultado es %d",final);
	return (0);
}

