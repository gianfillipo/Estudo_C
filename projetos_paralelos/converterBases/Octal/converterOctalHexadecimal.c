#include <stdio.h>
#include "calculos.h"
#include "conversao.h"

int octalDecimal(int num)
{
    int resto, resultado;

    for (int contador = 0; num >= 1; contador++)
    {
        resto = num % 10;
        resultado += resto * (potencia(2, contador));
        num /= 10;
    }
    return resultado;
}


int main()
{
    printf("%i",octalDecimal(1010));
}