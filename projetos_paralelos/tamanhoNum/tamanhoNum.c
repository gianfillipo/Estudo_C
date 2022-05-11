#include <stdio.h>

int main(){
    
    long int resultado,num;
    
    printf("Infome um número: ");
    scanf("%li",&num);
    
    resultado = 0;

    for(;num >= 1 ; num /= 10){
        
        resultado ++;

    }
    printf("%li\n",resultado);

    return 0;
}