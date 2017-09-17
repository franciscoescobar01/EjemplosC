#include <stdio.h>

int main() {
  printf("Bienvenido al ejemplo de estructura 'goto'.\n");
  printf("\n");
  int numero;

  printf("ingresa un numero\n");
  scanf("%d",&numero);

  //Declaración de etiqueta goto;
  goto fin_programa;

  numero = numero + 1;
  numero = numero * 4;

  //etiqueta de destino
  fin_programa:

  printf("El numero es : %d \n" , numero);

  printf("\n");
  printf("Adios\n");

  return 0;
}
