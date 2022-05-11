#include <stdio.h>
#include "calculos.h"

int main()
{
    int num, resto, resultado;

    scanf("%i", &num);

    resultado = 0;
    for (int contador = 0; num >= 1; contador++)
    {
        resto = num % 8;

        resultado += resto * (potencia(10, contador));

        num /= 8;
    }
    printf("\n\n%i", resultado);
}