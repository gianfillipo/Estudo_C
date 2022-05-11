#include <stdio.h>

// Caso só tenha uma linha de comando os colchetes não precisam ser declarados.
int main()
{
    int idade;

    printf("Favor informar sua idade: ");
    scanf("%i", &idade);

    if (idade >= 18)

        printf("Você pode consumir bebidas alcoólicas.\n");

    else

        if (18 - idade == 1) // Resolve o problema do plural na frase

        printf("Você não pode consumir bebidas alcoólicas, falta 1 ano para você poder consumir.\n");

    else

        printf("Você não pode consumir bebidas alcoólicas, faltam %i anos para você poder consumir.\n", 18 - idade);

    ;

    return 0;
}