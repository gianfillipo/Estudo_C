#include <stdio.h>

int main()
{
    const int bimestres = 4;
    int numeroDeAlunos;

    printf("\nInforme o número de alunos: ");
    scanf("%i", &numeroDeAlunos);

    float matrizNotas[numeroDeAlunos][bimestres];
    float totalMedia;
    float vetorMedia[numeroDeAlunos];

    for (int contador = 0; contador < numeroDeAlunos; contador++)
    {
        totalMedia = 0;
        printf("\n");
        for (int contador2 = 0; contador2 < bimestres; contador2++)
        {
            printf("Aluno %i Prova %i: ", contador + 1, contador2 + 1);
            scanf("%f", &matrizNotas[contador][contador2]);
            if (matrizNotas[contador][contador2] > 10 | matrizNotas[contador][contador2] < 0)
            {
                printf("Apenas números entre 0 e 10\n");
                contador2--;
                matrizNotas[contador][contador2] = 0;
            }
            totalMedia += matrizNotas[contador][contador2];
        }
        vetorMedia[contador] = totalMedia / bimestres;
        printf("\n");
    }

    // Média dos alunos
    for (int contador = 0; contador < numeroDeAlunos; contador++)
    {
        printf("Aluno %i / Notas:", contador + 1);
        for (int contador2 = 0; contador2 < bimestres; contador2++)
        {
            printf(" %f ", matrizNotas[contador][contador2]);
        }
        printf("/ Media: %f", vetorMedia[contador]);
        if (vetorMedia[contador] >= 6)
            printf("/ Resultado: Aluno passou de ano\n\n");
        else if (vetorMedia[contador] >= 4)
            printf("/ Resultado: Aluno está de recuperação\n\n");
        else
            printf("/ Resultado: Aluno reprovou\n\n");
    }

    // Média da sala
    float mediaSala;
    for (int contador = 0; contador < numeroDeAlunos; contador++)
    {
        mediaSala += vetorMedia[contador];
    }
    mediaSala /= bimestres;
    printf("\nA média da sala é %f\n", mediaSala);
    if (mediaSala >= 6)
        printf("\n A sala está acima da média\n");
    else
        printf("\n A sala está abaixo da média\n");
}