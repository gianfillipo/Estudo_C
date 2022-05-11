#include <stdio.h>

int main()
{
    int resultado;

    for (int num = 1; num <= 10; num++)
    {
        resultado = num;
        printf("%i", num);

        for (int fatorial = num - 1; fatorial >= 1; fatorial--)
        {

            printf(" * %i", fatorial);
            resultado *= fatorial;
        }
        printf(" = %i", resultado);
        printf("\n\n");
    }

    return 0;
}