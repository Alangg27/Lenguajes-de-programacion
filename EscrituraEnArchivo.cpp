#include <stdio.h>
#include <stdlib.h>

main()
{
	char nombre [40];
	char edad [3];
	char estatura [4];
	FILE* archivo;
	archivo=fopen("datos.txt","a");
	printf("Escribe el nombre completo a almacenar: ");
	scanf("%s",nombre);
	fflush(stdin);
	fputs(nombre,archivo);
	printf("Que edad tiene:\n");
	scanf("%s",edad);
	fflush(stdin);
	fputs(edad,archivo);
	printf("Cual es la estatura:\n");
	scanf("%s", estatura);
	fflush(stdin);
	fputs(estatura,archivo);
	fclose(archivo);
	return 0;
}
