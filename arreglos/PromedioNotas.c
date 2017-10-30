#include <stdio.h>

int main() {

  int temperatura[5];
  float promedio=0;

  printf("Bienvenido a tu programa \n");
  // llenar arreglo
  for(int i=0;i<5;i++){
        printf("Ingresa la nota numero %d\n",i+1 );
        scanf("%d",&temperatura[i]);;
  }

  // calcular promedio del arreglo
  for (int i=0;i<5;i++) {
    promedio = promedio + temperatura[i];
  }

  promedio = promedio/5;
  printf("promedio: %f\n", promedio);
  return 0;
}

// Generaremos una lista simulada de termperaturas aleatorias con 4 metodos para
// la generación de numeros aleatorios
