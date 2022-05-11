#include <stdio.h>
#include "calculos.h"

int converterDecimalBinario(int num)
{
    int resto, contador;

    contador = 0;
    resto = 0;
    while (num >= 1)
    {
        contador++;
        resto += num % 2 * (potencia(10, contador) / 10);
        num /= 2;
    }
    return resto;
}

int main()
{
    int num, resultado;
    scanf("%i", &num);
    resultado = 0;
    for (int contador = 0; num >= 1; contador++)
    {
        resultado += (num % 10) * potencia(8, contador);
        num /= 10;
    }
    printf("\n\n%i\n\n", converterDecimalBinario(resultado));
    return 0;
}