#include <stdio.h>
#include "calculos.h"

// É uma gambiarra, mas é uma gambiarra belíssima.
int main() 
{
    long int num;
    int num2, resultado, resto, total;

    printf("Informe o número em binário");
    scanf("%li", &num);

    resultado = 0;
    resto = 0;
    total = 0;

    for (int contador = 0; num >= 1; contador++)
    {

        num2 = 1;
        for (int contador2 = 0; num2 <= 3; contador2++)
        {
            resto = num % 10;
            resultado += resto * (potencia(2, contador2));
            num /= 10;
            num2++;
        }
        total += resultado * (potencia(10,contador));
        resultado = 0;
    }
    printf("\n%i", total);
    return 0;
}