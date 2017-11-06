#include <stdio.h>
int main(){
    FILE *archivo;
    char palabras[100], narchivo[25];
    char *c;

    printf("ingresa el nombre del archivo: \n");
    scanf("%s",narchivo);
    archivo= fopen(narchivo,"r");
    do{
        c=fgets(palabras,100,archivo);
        if(c!=NULL){
            printf("%s",palabras);
        }
    }while(c!=NULL);
    fclose(archivo);
}
