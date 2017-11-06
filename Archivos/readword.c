#include <stdio.h>

int main(){
    FILE *archivo;
    char palabra[100];
    char c;

    archivo = fopen("lectura.txt","r");
    do{
        c= fscanf(archivo, "%s", palabra);
        printf("%s\n",palabra);
    }while(c!=EOF);
    fclose(archivo);
}
