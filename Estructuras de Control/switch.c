#include <stdio.h>

int main() {

  int opcion;
  int numero;

  printf("Bienvenido al ejemplo de ciclo 'switch'. \n");
  printf("\n");

  printf("Ingresa un numero \n");
  scanf("%d",&numero);
  printf("Inngresa una de las opciones disponibles para ejecutar\n");
  printf("1.- Sumar 10 a tu numero\n");
  printf("2.- Multiplicar por 10 tu numero\n");
  printf("3.- Restar 10 a tu numero\n");

  scanf("%d",&opcion);

//inicio estructura de control 'switch'
  switch (opcion) {
    case 1:
      numero = numero+10;
      printf("El resultado es: %d .\n", numero);
      break;
    case 2:
      numero = numero*10;
      printf("El resultado es: %d .\n", numero);
      break;
    case 3:
      numero = numero-10;
      printf("El resultado es: %d .\n", numero);
      break;
      default:
      printf("ingresaste una opcion incorrecta .\n" );
  }
// Fin de estructura de control 'switch'

  printf("\n");
  printf("Adios\n" );
  return 0;
}
