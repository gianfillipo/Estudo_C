#include <stdio.h>
#include "calculos.h"

int main()
{
    int a, b, c, delta, x1, x2;

    printf("Informe a: "); // A
    scanf("%i", &a);

    printf("Informe b: "); // B
    scanf("%i", &b);

    printf("Informe c: "); // C
    scanf("%i", &c);

    delta = potenciacao(b, 2) - 4 * a * c; // Precisamos informar o valor do delta após a definição das variáveis

    if (delta < 0)

        printf("Não há solução real ∆ = %i\n", delta);

    else if (delta == 0)
    {
        x1 = (-b) / (2 * a);
        printf("x = %i\n", x1);
    }

    else if (delta > 0)
    {
        x1 = (-b + raizQuadrada(delta)) / (2 * a);
        x2 = (-b - raizQuadrada(delta)) / (2 * a);

        if (x1 > x2)
            printf("Resultado: x' = %i ; x'' = %i\n", x2, x1); // Mostra os números menores como x' e os maiores como x''
        else
            printf("Resultado: x' = %i ; x'' = %i\n", x1, x2);
    }

    return 0;
}

// gcc arquivo.c -o math -lm (Compilar com a biblioteca math)