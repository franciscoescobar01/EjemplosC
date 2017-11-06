#include <stdio.h>

int fibboRec(int n);

void fibboIt(int n);

int main() {
  int n, contador,i=0;
  printf("Ingresa el numero de terminos a generar\n");
  scanf("%d",&n);

  printf("Generación de serie de forma iterativa\n");
  fibboIt(n);
  printf("\n");

  printf("Generación de serie de forma recursiva\n");
  for (i = 0; i < n; i++) {
    printf("%d\n", fibboRec(i));
  }
  printf("Adios\n");
  return 0;
}

int fibboRec(int n){
  if(n<2){
    return n;
  }else{
    return fibboRec(n-1)+fibboRec(n-2);
  }
}

void fibboIt(int n){
  int fib1 = 0, fib2 = 1, fib3 = 0;
  int i;
  for (i = 0; i < n; i++) {
    printf(" %d \n", fib3);

    fib1 = fib2;
    fib2 = fib3;     // Copy current to n-1
    fib3 = fib1 + fib2; // New term
  }
}
