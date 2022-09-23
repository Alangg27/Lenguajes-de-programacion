#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


int main ()
{
	char jugar[]="SI";
	char jugar1[]="SI";
	int x=0;
	while (x==0)
	{
		
		int adivina=-1;
		int contador=0;
		srand(time(NULL));
		int Noculto = rand()&51;
		printf("quieres volver a jugar SI/NO: ");
		scanf ("%s",jugar1);
		x=strcmp(jugar,jugar1);
	
	}
	return 0;
}
