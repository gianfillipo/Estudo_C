#include <stdio.h>

int main()
{
    int fatorial;
    int resultado = 1;

    printf("Informe o número fatorial:");
    scanf("%i",&fatorial);

    for ( ; fatorial >=1; --fatorial){
        resultado *= fatorial;
    };
    printf("O resultado é %i\n",resultado);
}