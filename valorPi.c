#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main ()
{
	int i;
	int limite = 10000000;
	float suma = 0;
	float pi= 0;
	for (i=1; i<=limite; i++ )
	{
		suma =suma+ 1 / (pow(i,2));
	}
	pi = sqrt(suma*6);
	printf("el valor de pi es: %f \n", pi);
	return 0;
}
