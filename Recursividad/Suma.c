#include <stdio.h>

#define largo 200

int main(){
    int arreglo[largo];
    int suma;


}



int sumar(int a[],int n){
    if(n==1){
        return a[0];
    }else{
        return a[n-1]+sumar(a,n-1);
    }
}
