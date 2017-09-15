#include <stdio.h>

void multiplicar();
void sumar(int n1, int n2);
int leer();

int main(){

    int num1, num2;

    printf("Bienvenido a tu programa \n");
    multiplicar();
    printf("ingresa un numero entero\n");
    scanf("%d",&num1);
    printf("ingresa un numero entero\n");
    scanf("%d",&num2);
    sumar(num1, num2);
    printf("Adios\n");

    return 0;
}

void multiplicar(){

    int n1= leer();
    int n2= leer();

    printf(" %d * %d = %d \n",n1 ,n2, n1*n2 );
}

void sumar(int n1, int n2){

    printf("La suma de los numero es :%d\n",(n1+n2));
}

int leer(){

    int numero;
    printf("Ingresa un numero entero \n");
    scanf("%d",&numero);
    return numero;
}
