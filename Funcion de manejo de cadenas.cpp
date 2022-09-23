/*
#include <stdio.h>
#include <string.h>
main()
{
char texto[]="Gandalf";
int longitud;
longitud = strlen(texto);
printf( "La cadena \"%s\" tiene %i caracteres.\n", texto, longitud );
}
*/

/*
#include <stdio.h>
#include <string.h>
main()
{
char texto[]="Gandalf";
char *p;
int longitud=0;
p = texto;
while (*p != '\0') {
longitud++;
printf( "%c\n", *p ); /* Mostramos la letra actual */
p++; /* Vamos a la siguiente letra */
}
printf( "La cadena \"%s\" tiene %i caracteres.\n", texto, longitud );
}

*/



/*
#include <stdio.h>
#include <string.h>
main()
{
char texto[] = "Éste es un curso de C.";
char destino[50];
strcpy( destino, texto );
printf( "Valor final: %s\n", destino );
}
*/


/*
#include <stdio.h>
#include <string.h>
main()
{
char destino[50]="Éste no es un curso de HTML, sino de C.";
printf( "%s\n", destino );
strcpy( destino, "Éste es un curso de C." );
printf( "%s\n", destino );
}
*/

/*
#include <stdio.h>
#include <string.h>
main()
{
char nombre_completo[50];
char nombre[]="Gandalf";
char apellido[]="el Gris";
strcpy( nombre_completo, nombre );
strcat( nombre_completo, " " );
strcat( nombre_completo, apellido );
printf( "El nombre completo es: %s.\n", nombre_completo );
}
*/


/*
#include <stdio.h>
#include <string.h>
main()
{
char nombre_completo[50];
char nombre[]="Gandalf";
char apellido[]="el Gris";
sprintf( nombre_completo, "%s %s", nombre, apellido );
printf( "El nombre completo es: %s.\n", nombre_completo );
}
*/

/*
#include <stdio.h>
#include <string.h>
main()
{
char nombre1[]="Gandalf";
char nombre2[]="Frodo";
printf( "Comparación con strcmp: %i\n", strcmp(nombre1,nombre2));
}
*/

/*
#include <stdio.h>
#include <string.h>
int error( int num_err )
{
char *errores[] = {
"No se ha producido ningún error",
"No hay suficiente memoria",
"No hay espacio en disco",
"Me he cansado de trabajar"
};
printf( "Error número %i: %s.\n", num_err, errores[num_err] );
exit( -1 );
}
main()
{
error( 2 );
}
*/

/*
#include <stdio.h>
#include <string.h>
main()
{
char cadena[]="El puerto paralelo del PC";
char *p;
int espacios = 0, letras_e = 0;
p = cadena;
while (*p != '\0') {
if (*p == ' ') espacios++;
if (*p == 'e') letras_e++;
p++;
}
printf( "En la cadena \"%s\" hay:\n", cadena );
printf( " %i espacios\n", espacios );
printf( " %i letras e\n", letras_e );
*/

/*
#include <stdio.h>
#include <string.h>
main()
{
char cadena[]="El puerto paralelo del PC";
char *p;
p = cadena;
while (*p != '\0') 
{
if (*p == ' ') *p = '-';
p++;
}
printf( "La cadena queda: \"%s\" \n", cadena );
}
*/
