#include <stdio.h>

int main() {

  int contador, i=0;

  printf("Bienvenido al ejemplo de ciclo 'while'. \n");
  printf("\n");
  printf("Ingresa hasta donde contar\n");
  scanf("%d",&contador);

  //inicio ciclo mientras
  while(i<contador){
    i=i+1;
    printf("el numero es: %d.\n", i);
  }
  //fin ciclo mientras

  printf("\n");
  printf("adios\n");

  return 0;
}
