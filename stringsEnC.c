
#include <stdio.h>

/*
main()
{
	char nombre[20];

	printf( "Introduzca su nombre (20 letras máximo): " );
	scanf( "%s", nombre );  //no se utiliza el &antes de la variable por ser un array
	printf( "\nEl nombre que ha escrito es: %s\n", nombre );
}
*/


//=========================================================================================
/*
main()
{
	char nombre[] = "Gandalf";

	printf( "Texto: %s\n", nombre );
	printf( "Tama%co de la cadena: %i bytes\n", 164,sizeof nombre );
}
*/

//=======================================================================================
/*
main()
{
	char nombre[] = { 'G', 'a', 'n', 'd', 'a', 'l', 'f','\0' };

	printf( "Texto: %s\n", nombre );
	printf( "Tama%co de la cadena: %i bytes\n",164, sizeof nombre );
	
	
}
*/
//======================================================================================
/*
#include <stdio.h>
#include <stdlib.h>
// Ejemplo Diferencias entre printf y puts
int main() {
    char url [] = "http://www.hotmail.com";
    printf ("%s\n", url) ;
    puts (url);
    return 0;
}
*/
//======================================================================================
/*
#include <stdio.h>
#include <stdlib.h>
// Ejemplo Manejo de Frases
int main() {
    char frase [100];
    char frase2 [20];
    printf ("Escriba una frase") ;
    gets (frase);
    printf("escribe otra frase");
    gets (frase2);    
    puts ("Frases introducida:");
    puts (frase);
    puts(frase2);
    return 0;
}

*/




