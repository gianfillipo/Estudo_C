#include <stdio.h>

int main(void)
{
    // A matriz nada mais é do que um vetor com mais de uma dimensão. Primeiro declaramos as linha e depois o número de colunas.
    // Primeira forma de representar
    // Primeiro declaramos o número de colunas depois o número de elementos em uma linha.
    int matriz[3][3] = {{1, 2, 3},
                        {4, 5, 6},
                        {7, 8, 9}};

    // Segunda forma de representar.
    int matriz2[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    for (int contador = 0; contador < 3; contador++)
    {
        for (int contador2 = 0; contador2 < 3; contador2++)
        {
            printf("%i", matriz[contador][contador2]);
           
        }
        printf("\n");
    }

    return 0;
}