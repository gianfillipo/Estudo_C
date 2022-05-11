#include <stdio.h>

int main()
{
    int contador;
    int numeroTabuada;
    
    //Usuário informa o número da tabuada
    printf("Informe a tabuada desejada:"); 
    scanf("%i",&numeroTabuada);

    //Programa exibe a tabuada na tela, através de um loop
    for(contador=1;contador <= 10;contador++){        
        printf ("%i * %i é igual a %i\n",numeroTabuada,contador,numeroTabuada*contador);
    }
    
    return 0;
}