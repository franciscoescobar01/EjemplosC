#include <stdio.h>

int multiplicar(int n);

int main(){

    int numero;

    printf("Ingresa un numero entero \n");
    scanf("%d",&numero);
    printf("el numero %d se multiplicara por 10\n", numero);
    printf("El numero resultante es: %d\n", multiplicar(numero));

    return 0;
}

int multiplicar(int n){
    return n*10;
}
