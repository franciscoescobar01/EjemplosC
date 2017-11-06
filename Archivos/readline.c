#include <stdio.h>

int main(){
    FILE *archivo;
    char linea[100];
    char *c;

    archivo=fopen("lectura.txt","r");
    do{
        c=fgets(linea, 100,archivo);
        if(c!=NULL)
            printf("%s",linea);
    }while(c !=NULL);
    fclose(archivo);
}
