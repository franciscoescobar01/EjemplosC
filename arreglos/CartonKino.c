#include <stdio.h>
#include <stdlib.h>

int main() {

  short int numeros[200]={0};
  int numerosAsignado=0;
  time_t t;

  printf("Bienvenido a tu programa \n");

  srand((unsigned) time(&t));

  while (numerosAsignado<15) {
    int rnum=rand()%200;
    if (numeros[rnum]==0) {
      numeros[rnum]=1;
      numerosAsignado++;
    }
  }

  for(int i=0;i<200;i++){
    if(numeros[i]){
      printf("[ %d ]", i);
    }
  }
  printf("\n\n\n");

  int linea=0;
  for(int i=0;i<200;i++){
    if(numeros[i]){
      printf("[ %d ]", i);
      if (linea!=2) {
        linea++;
      }else{
        printf("\n");
        linea=0;
      }
    }

  }
  return 0;
}

// Generaremos una lista simulada de termperaturas aleatorias con 4 metodos para
// la generación de numeros aleatorios
