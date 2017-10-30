#include <stdio.h>

int factorialRec(int n);
int factorialIt(int n);

int main() {
  printf("Bienvenido a tu programa\n");
  printf("Ingresa el numero sobre el que deseas ingresar el factorial\n");
  long int fact = 0;
  int n;
  scanf("%d",&n);
  fact = factorialRec(n);
  printf("%d\n",fact);
  fact = factorialIt(n);
  printf("%d\n",fact);
  printf("adios\n");
  return 0;
}

int factorialIt(int n){
  int fact=1;
  for (int i = 1; i <= n; i++) {
    fact=i*fact;
  }
  return fact;
}

int factorialRec(int n){
  if (n==0) {
    return 1;
  }else{
    return n*factorialRec(n-1);
  }
}
