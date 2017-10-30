#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void ordenar (char arreglo[], int largo);

int main() {

  char letras[50];
  time_t t;

  printf("Bienvenido a tu programa \n");

  srand((unsigned) time(&t));

  for (int i = 0; i < 50; i++) {
      letras[i]=(char)(rand()%25+97);
  }

  for (int i = 0; i < 50; i++) {
      printf(" %c -", letras[i]);
  }

  ordenar(letras, 50);

  printf("\n\n\n");

  for (int i = 0; i < 50; i++) {
      printf(" %c -", letras[i]);
  }

  return 0;
}

void ordenar (char arreglo[], int largo){
    for (int i = 0; i < largo-1; i++) {
      for (int j = 0; j < largo - i - 1; j++) {
        if(arreglo[j]> arreglo[j+1]){
          char t = arreglo[j];
          arreglo[j] = arreglo[j+1];
          arreglo[j+1] = t;
        }
      }
    }
}



// Generaremos una lista simulada de termperaturas aleatorias con 4 metodos para
// la generación de numeros aleatorios
