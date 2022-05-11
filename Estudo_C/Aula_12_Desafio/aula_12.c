#include <stdio.h>

int main()
{
    int contador;
    int numeroFatorial;

    printf("Informe o número que deseja o fatorial:");
    scanf("%i", &numeroFatorial);

    printf("\n %i", numeroFatorial);

    for (contador = numeroFatorial - 1; contador != 0; contador--)
    {
        numeroFatorial *= contador;
        printf(" * %i", contador);
    };

    printf(" É igual a %i\n", numeroFatorial);

    return 0;
}