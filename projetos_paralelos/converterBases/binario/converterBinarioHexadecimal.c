#include <stdio.h>
#include "calculos.h"

int tamanho(int num)
{
    int num2,tamanhoVetor;

    tamanhoVetor = 0;
    while (num >= 1)
    {
        
        num2 = 1;
        for (int contador = 0; num2 <= 4; contador++)
        {
            num /= 10;
            num2++;
        }
        tamanhoVetor++;
    }
    return tamanhoVetor;
}

int main()
{
    int num, num2, resto, resultado, tamanhoVetor;

    scanf("%i",&num);

    tamanhoVetor = tamanho(num);
    resultado = 0;

    int vetor[tamanhoVetor];

    for (int contador = 0; num >= 1; contador++)
    {
        num2 = 1;
        for (int contador2 = 0; num2 <= 4; contador2++)
        {
            resto = num % 10;
            resultado += resto * (potencia(2, contador2));
            num /= 10;
            num2++;
        }
        vetor[contador] = resultado;
        resultado = 0;
    }
    
    for (;tamanhoVetor - 1 >= 0; tamanhoVetor--){

        if(vetor[tamanhoVetor-1] == 10)
            printf("A");
        
        else if(vetor[tamanhoVetor-1] == 11)
            printf("B");

        else if(vetor[tamanhoVetor-1] == 12)
            printf("C");

        else if(vetor[tamanhoVetor-1]== 13)
            printf("D");

        else if(vetor[tamanhoVetor-1] == 14)
            printf("E");

        else if(vetor[tamanhoVetor-1] == 15)
            printf("F");

        else
        printf("%i",vetor[tamanhoVetor - 1]);
    }
    printf("\n");

    return 0;
}
