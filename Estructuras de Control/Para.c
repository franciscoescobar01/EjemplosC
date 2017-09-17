#include <stdio.h>

int main(){

  int tabla;
  int i;
  printf("Bienvenido al ejemplo de ciclo 'for'. \n");
  printf("\n");


  printf("Ingresa un numero entero para mostrar su tabla de multiplicar\n");
  scanf("%d",&tabla);

  //inicio de ciclo for
  for(i = 0; i<=10; i=i+1){
    printf("%d x %d = %d\n",i,tabla, i*tabla);
  }
  //fin de ciclo for

  printf("\n");
  printf("adios\n");

  return 0;
}
