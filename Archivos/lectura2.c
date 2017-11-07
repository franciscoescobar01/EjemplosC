#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(){
    char c[100];
    FILE *fptr;

    if((fptr= fopen("lectura.txt","r"))==NULL){
        printf("Error de lectura");
        exit(1);
    }

    fscanf(fptr,"%s",&c[0]);

    printf("la informacion es:\n%s",c);
    fclose(fptr);

    return 0;
}
