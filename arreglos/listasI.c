// Generaremos una lista simulada de termperaturas aleatorias con
// la generación de numeros aleatorios estandar

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  // declaración de arreglo de largo definido
  int temperatura[30];

  // declaración de arreglo con largo y contenido;
  double iTemperatura[12] = {1.3, 1.2, 1.1, 1, 0.9, 0.8, 0.9, 1, 1.1, 1.2, 1.3, 1.4};
  float promedio=0;

  // llenar arreglo
  for(int i=0;i<30;i++){
      temperatura[i]=rand()%20+10;
      printf("%d\n",temperatura[i]);
  }

  // calcular promedio del arreglo con el reajuste mensual
  // recorrer el arreglo de meses
  for (int i=0;i<12;i++) {
    // recorrer el arreglo de dias
    for (int j=0;j<30;j++) {
      promedio = promedio + temperatura[j];
      promedio = promedio *iTemperatura[i];
    }
    printf("%d\n", );
  }

  for (int i=0;i<12;i++) {


  }

  promedio = promedio/30;
  printf("promedio: %f\n", promedio);
  return 0;
}

// Generaremos una lista simulada de termperaturas aleatorias con 4 metodos para
// la generación de numeros aleatorios
