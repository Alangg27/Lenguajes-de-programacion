/* manejo de numeros aleatorios
mediante la funcion raid y srand
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ()

{
	int valor;
	int numero=-1;
	int contador=0;
	srand(time(NULL));
	valor=rand()%51;
	while (valor!=numero)
{
		contador++;
	printf("Elige un numero entre 0 y 50\n");
	scanf("%d",&numero);	
	
		if(numero<valor){
	printf("Estas por debajo,vuelva a intentar\n");
}

	else if (numero>valor){
	printf("Estas por encima,vuelva a intentar\n");
}

	else{
	printf("El numero es correcto\n");
}

if (contador==5)
{
numero=valor;
printf("Se te acabaron los intentos\n");
}
}
	return 0;
}

