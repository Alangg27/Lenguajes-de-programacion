#include <stdio.h>
int main (){
	int n, d,Primos_Mostrar;
	int es_primo;
	printf ("\n¿Cuantos numeros quiere mostrar?");
	scanf( "%d",&Primos_Mostrar);
	n = 2;
	while (Primos_Mostrar > 0)
{
	es_primo = 1;
	for (d = 2; d < n; ++d)
	{ 
	if ( n % d == 0){
		es_primo = 0;
		break;
	}
	}
	if ( es_primo){
		printf("%d ", n);
		Primos_Mostrar--;
	}
	n++;
}
printf("\n");
	return (0);
}

