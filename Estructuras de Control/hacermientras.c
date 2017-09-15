#include <stdio.h>

int main() {

  int contador, i=0;

  printf("Bienvenido al ejemplo de ciclo 'do-while'. \n");
  printf("\n");
  printf("Ingresa hasta donde contar\n");
  scanf("%d",&contador);

  //inicio ciclo hacer-mientras
  do{
    i=i+1;
    printf("el numero es: %d.\n", i);
  }while(i<contador);
  //fin ciclo hacer-mientras

  printf("\n");
  printf("adios\n");

  return 0;
}
