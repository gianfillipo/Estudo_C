#include <stdio.h>
#include "calculos.h"

int main() 
{
    int num, resultado, resto;

    scanf("%i", &num);

    resultado = 0;
    for(int contador = 0; num >= 1; contador++)
    {
        resto = num % 10;
        resultado += resto * (potencia(8, contador));
        num /= 10;
    }

    printf("\n\n%i\n",resultado);

    return 0;
}