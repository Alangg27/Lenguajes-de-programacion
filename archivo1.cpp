 #include<stdio.h>
 #include<stdlib.h>
 
 int main()
 {
 	FILE* archivo;
 	archivo = fopen("almacen1.txt", "r");
 	fputs("ya estas programando y trabajando con archivos\n", archivo);
 	fputs(" requiere un gran esfuerzo y dedicacion\n",archivo);
    fputs("para el resultado, vale la pena\n",archivo);
    fclose(archivo);
    printf("proceso terminado correctamente");
    
    
    return 0;
 }
 
 /*
 Las formas de abrir el archivo son estas:
 r - abre el archivo en modo solo de lectura
 w - abre el archivo para escritura (si no existe la crea, si existe la reemplaza).
 a - abre el archivo para agregar informacion ( si no existe la crea).
 r+ - abre el archivo para lectura/escritura (comienza al principio del archivo).
 w+ - abre el archivo para lectura/escritura, (sobre-escribe el archivo si este ya existe o lo crea si no).
 a+ -  abre le archivo para lectura/escritura (se situa al final del archivo).
 */
