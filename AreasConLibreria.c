#include <stdio.h>
#include "operaciones.h"

int main ()
{
    float Valor1, Valor2, Valor3, resultado;
    int opcion=1;

    while (opcion!=5)
	{
	printf("Calculadora.\n\n");
    printf("?Que operacion quieres realizar?\n");
    printf("1. 	Area de un circulo.\n");
    printf("2. Area de un pentagono.\n");
    printf("3. Area de un trapecio.\n");
    printf("4. Area de un rectangulo.\n\n");
    printf("Elige una opcion: ");
    scanf("%d", &opcion);
   
    
	switch(opcion)
    {
    case 1:
    	printf("\n ingrese el valor del radio:");
    	scanf("%f",&Valor1);
		resultado = AreaC(Valor1);
		printf ("El resultado es:",resultado);
		break;
		
		case 2:
			printf("\n ingrese el primer valor:");
    	scanf("%f",&Valor1);
    	printf("\n ingrese el segundo valor:");
    	scanf("%f",&Valor2);
    	resultado = AreaP (Valor1, Valor2);
    	printf("\El resultado es:",resultado);
    	break;
    	    
    	    case 3:
    	    	printf("\n ingrese el primer valor:");
    	scanf("%f",&Valor1);
    	printf("\n ingrese el segundo valor:");
    	scanf("%f",&Valor2);
    	printf("\n ingrese el valor de la altura:");
    	scanf("&f",&Valor3);
    	resultado = AreaT(Valor1, Valor2, Valor3);
    	printf("\El resultado es:",resultado);
    	break;
    	        case 4:
				    	printf("\n ingrese el primer valor:");
    	scanf("%f",&Valor1);
    	printf("\n ingrese el segundo valor:");
    	scanf("%f",&Valor2);
    	resultado = AreaR(Valor1, Valor2);
    	printf("\El resultado es:",resultado);
    	break;
    	
    	default:
    		printf("Esa opcion no es valida\n");
		
		}
	}
	return 0;
}
    
 
