#include <stdio.h>

int main()
{
    int idade;
    printf("Informar idade\n");
    scanf("%i", &idade);

    if (idade <= 5)
        printf("Bebê");
    else if (idade <= 10) // Não precisamos declara (idade > 5 && idade <= 10), pois isso já esta definido no else
        printf("Criança\n");
    else if (idade <= 18)
        printf("Jovem\n");

    else if (idade <= 50)
        printf("Adulto\n");

    else
        printf("Idoso");

    return 0;
}