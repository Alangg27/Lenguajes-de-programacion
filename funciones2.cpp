#include<stdio.h>
#include<math.h>

float calculo(int x)
{
	float resultado;
    return resultado=sqrt(x);
}

int main()
{
 int valor;
 float salida;
 printf("programa para calcular la raiz cuadrada de un numero\n\n");
 printf("ingrese el valor para calcular la raiz cuadrada:");
 scanf("%d",&valor);
 	salida=calculo (valor); //salida recibe el valor de retorno del calculo de la funcion 
	printf ("el resultado es %f",salida);
	return(0);
}

