#include <stdio.h>
#include <string.h>

int main(){
    FILE *fp;
    char letra;
    fp = fopen("archivo.txt","a+t");
    printf("Escribe algo en la linea: \n");
    while((letra=getchar())!='\n'){
        printf("%c", fputc(letra,fp));
    }
    fclose(fp);
    return 0;
}

