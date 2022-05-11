#include <stdio.h>
#include "calculos.h"

int main()
{
    int resultado, binario, resto;

    printf("Informe um número: ");
    scanf("%i", &binario);

    resultado = 0;
    for (int contador = 0; binario >= 1; contador++)
    {
        resto = binario % 10;
        resultado += resto * (potencia(2,contador)); 
        binario /= 10;
    }

    printf("\n\n%i\n\n",resultado);

    return 0;
}