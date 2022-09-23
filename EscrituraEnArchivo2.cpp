#include <stdio.h>
#include <stdlib.h>

main()
{
	int  N= 1;
	char nombre [40];
	char edad [3];
	char estatura [4];
	FILE* archivo;
	archivo=fopen("datos.csv","a");
	while(N<=3){
	
	printf("Escribe el nombre completo a almacenar: ");
	gets(nombre);
	fputs(nombre,archivo);
	fputs(",",archivo);
	printf("Que edad tiene:\n");
	gets(edad);
	fputs(edad,archivo);
	fputs(",",archivo);
	printf("Cual es la estatura:\n");
	gets(estatura);
	fputs(estatura,archivo);
	fputs("\n",archivo);
	N++;
}
	fclose(archivo);
	return 0;

}

