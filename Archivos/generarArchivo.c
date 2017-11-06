#include <stdio.h>
#include <string.h>

int main() {
  FILE *fp;
  char cosas[25];
  int i;

  fp= fopen("archivo.txt","w");
  strcpy(cosas,"Linea de ejemplo.");
  for(i=1;i<=11;i++){
    fprintf(fp,"%s linea numero %d\n",cosas, i);
  }
  fclose(fp);
}
