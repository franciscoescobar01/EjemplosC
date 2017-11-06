#include <stdio.h>

int main(){
    FILE *archivo;
    char c;

    archivo=fopen("lectura.txt","r");
    if(archivo ==NULL){
        printf("el archivo no existe");
    }else{
        do{
            c=getc(archivo);
            putchar(c);
        }while(c!=EOF);
    }
    fclose(archivo);
}
