#include <stdio.h>

int calcularTamanhoVetor(int num)
{

    int tamanhoVetor = 0;

    while (num >= 1)
    {

        tamanhoVetor++;
        num /= 16;
    }
    return tamanhoVetor;
}

int main()
{
    int num, resto, tamanhoDoVetor;

    scanf("%i",&num);

    tamanhoDoVetor = calcularTamanhoVetor(num);
    int vetor[tamanhoDoVetor];
    resto = 0;
    for (int contador = 0; num >= 1; num /= 16)
    {
        resto = num % 16;
        vetor[contador] = resto;
        contador++;
    }

    for (; tamanhoDoVetor - 1 >= 0; tamanhoDoVetor--)
    {
        if (vetor[tamanhoDoVetor - 1] == 10)

            printf("A");

        else if (vetor[tamanhoDoVetor - 1] == 11)

            printf("B");

        else if (vetor[tamanhoDoVetor - 1] == 12)

            printf("C");

        else if (vetor[tamanhoDoVetor - 1] == 13)

            printf("D");

        else if (vetor[tamanhoDoVetor - 1] == 14)

            printf("E");

        else if (vetor[tamanhoDoVetor - 1] == 15)

            printf("F");

        else
            printf("%i", vetor[tamanhoDoVetor - 1]);
    }
    printf("\n");
    return 0;
}