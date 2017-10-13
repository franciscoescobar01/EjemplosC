#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define cartones 1000

void generaCarton(short int arreglo[]);
void mostarCarton(short int arreglo[]);
int compararCarton(short int a[], short int b[]);

int main() {

  short int ganador[200]={0};
  short int sorteos[cartones][200]={0};

  time_t t;

  printf("Bienvenido a tu programa \n");

  srand((unsigned) time(&t));

  generaCarton(ganador);
  mostarCarton(ganador);

  int n = sizeof(ganador)/sizeof(ganador[0]);
  printf("%d\n",n);
  n= sizeof(sorteos)/sizeof(sorteos[0]);
  printf("%d\n",n);

  for (int i=0; i< cartones; i++) {
      generaCarton(sorteos[i]);
      printf("-%d- ", i);
  }

  printf("\n\n\n");

  int max=0;
  for (int i = 0; i < cartones; i++) {
      mostarCarton(sorteos[i]);
      int con = compararCarton(ganador,sorteos[i]);
      if (max<con) {
        max=con;
      }
      printf("El numero de coincidencias son %d\n",con);
  }
  printf("El numero maximo de coincidencias es: %d.\n", max);
  return 0;
}

void mostarCarton(short int arreglo[]){
  int linea=0;
  printf("-------------------------\n");
  for(int i=0;i<200;i++){
    if(arreglo[i]){
      printf("[ %d\t]", i);
      if (linea!=2) {
        linea++;
      }else{
        printf("\n");
        linea=0;
      }
    }
  }
  printf("-------------------------\n");
}

void generaCarton (short int arreglo[]){
  int numerosAsignado=0;
  while (numerosAsignado<15) {
    int rnum=rand()%200;
    if (arreglo[rnum]==0) {
      arreglo[rnum]=1;
      numerosAsignado++;
    }
  }
}

int compararCarton(short int a[], short int b[]){
  int largo =200;
  printf("%d\n",largo );
  int contador=0;
  for (int i = 0; i < largo; i++) {
    if(a[i]==b[i] && a[i]){
      contador++;
    }
  }
  return contador;
}
