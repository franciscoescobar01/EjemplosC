#include <stdio.h>
#include <stdlib.h>

int main(){
    char c[100];
    FILE *fptr;

    if((fptr= fopen("lectura.txt","r"))==NULL){
        printf("Error de lectura");
        exit(1);
    }

    fscanf(fptr,"%[^\n]",c);

    printf("la informacion es:\n%s",c);
    fclose(fptr);

    return 0;
}
