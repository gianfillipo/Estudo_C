#include <stdio.h>

int main()
{
    const int bimestresAnuais = 4;
    int numeroDeAlunos;

    printf("Informe o número de alunos: ");
    scanf("%i", &numeroDeAlunos);

    float matrizNotas[numeroDeAlunos-1][bimestresAnuais-1];
    float total;
    float vetorMedia[numeroDeAlunos-1];

    printf("\n\n");

    for (int contador = 0; contador < numeroDeAlunos; contador++)
    {
        total = 0;
        for (int contador2 = 0; contador2 < 4; contador2++)
        {
            printf("Aluno: %i Nota da prova %i: ", contador + 1, contador2 + 1);
            scanf("%f", &matrizNotas[contador][contador2]);
            if (matrizNotas[contador][contador2]< 0 | matrizNotas[contador][contador2]> 10)
            {
                contador2--;
                matrizNotas[contador][contador2] = 0;
                printf("\nApenas números entre 0 e 10\n");
            }
            total += matrizNotas[contador][contador2];
            printf("\n");
        }
        vetorMedia[contador] = total / bimestresAnuais;
        printf("\n\n");
    }

    for (int contador = 0; contador < numeroDeAlunos; contador++)
    {
        printf("Média do aluno %i: %f\n", contador + 1, vetorMedia[contador]);
    }

    return 0;
}