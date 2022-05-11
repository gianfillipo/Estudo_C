#include <stdio.h>

int main()
{
    int numeroFatorial;
    int contador;

    printf("Digite o número fatorial:");
    scanf("%i",&numeroFatorial);

    printf("\n%i",numeroFatorial);

    for (contador = numeroFatorial-1; contador >= 1; contador--)
    {
        numeroFatorial *= contador;
        printf(" x %i",contador);
       
    };

    printf(" = %i\n\n",numeroFatorial);

    return 0;
}