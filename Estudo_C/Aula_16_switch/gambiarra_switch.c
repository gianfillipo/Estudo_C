#include <stdio.h>

int main()
{
    int num;

    printf("Digite um número de 1 a 5");
    scanf("%i",&num);

    if (num <= 5 && num >= 1)
        printf("%i Número válido", num);

    else
        printf("%i Número inválido", num);

    return 0;
}