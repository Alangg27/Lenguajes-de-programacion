#include <stdio.h>
 
 
int main() 
{   
int numero;   
  char mes[12][20] =  //el primer elemento son renglones el segundo columnas
     {
     "enero", 
     "febrero", 
     "marzo",
     "abril", 
     "mayo", 
     "junio", 
     "julio", 
     "agosto", 
     "septiembre", 
     "octubre", 
     "noviembre",
     "diciembre" 
     };
     printf("Cual mes quieres imprimir: ");
 
  scanf("%d",&numero);
  printf("El mes %d, corresponde a: %s",numero,mes[numero]);
  //puts(notas[2][7]);
 
  return 0;
}

