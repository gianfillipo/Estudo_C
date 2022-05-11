#include <stdio.h>

int main(void)
{
    int vetor[5] = {5,2,3,1,2}; 

    
// Pede para o usuário informar os 5 valores do vetor
   /* for(int contador = 0; contador < 5; contador++){
    scanf("%i",&vetor[contador]);
    }*/

    for(int contador = 0; contador < 5; contador++){
    printf("%i", vetor[contador]);       
    }

}