#include <stdio.h>
#include <stdlib.h>

int main() {

  int temperatura[30];
  float promedio=0;
  time_t t;

  //semilla aleatoria para modificar los valores entregados por rand()
  srand((unsigned) time(&t));

  // llenar arreglo
  for(int i=0;i<30;i++){
      temperatura[i]=rand()%20+10;
  }

  // calcular promedio del arreglo
  for (int i=0;i<30;i++) {
    promedio = promedio + temperatura[i];
  }

  promedio = promedio/30;
  printf("promedio: %f\n", promedio);
  return 0;
}

// Generaremos una lista simulada de termperaturas aleatorias con 4 metodos para
// la generación de numeros aleatorios
