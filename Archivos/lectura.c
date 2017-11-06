#include <stdio.h>
#include <stdlib.h>

int main(){
    char c[1000];
    FILE *fptr;

    if((fptr= fopen("lentura.txt","r"))==NULL){
        printf("Error de lectura");
        exit(1);
    }

    fscanf(fptr,NULL,c);

    printf("la informacion es:\n%s",c);
    fclose(fptr);

    return 0;
}
