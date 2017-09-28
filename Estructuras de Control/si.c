#include <stdio.h>

int main() {

  int n1, n2, n3;
  int mayor;

  printf("Bienvenido al ejemplo de ciclo 'si'. \n");
  printf("\n");
  printf("Ingresa a un numero\n");
  scanf("%d",&n1);
  printf("Ingresa a un numero\n");
  scanf("%d",&n2);

  mayor=n1;
  //inicio estructura if
  if(n2>mayor){
    mayor=n2;
    printf("El segundo numero es mayor que el primero\n");
  }else{
    printf("El primer numero es mayor que el segundo\n");
  }
  //fin estructura if

  printf("Ingresa a un numero\n");
  scanf("%d",&n3);

  printf("Calculando el numero mayor \n");

  //inicio estructura if
  if(n3>mayor){
    mayor=n3;
    printf("El tercer numero es mayor\n");
  }
  //fin estructura if

  printf("el numero mayor es %d\n", mayor);

  printf("\n");
  printf("adios\n");

  return 0;
}
