#include <stdio.h>
#include "calculos.h"

int main()
{

    int num, resto, contador;

    printf("Informe o número decimal");
    scanf("%i", &num);

    contador = 0;
    resto = 0;
    while (num >= 1)
    {
        contador++;
        resto += num % 2 * (potencia(10, contador) / 10);
        num /= 2;
    }
    printf("\n\n\n\%i\n", resto);

    return 0;
}