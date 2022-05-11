#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Digite dois números:\n");
    scanf("%i %i", &num1, &num2);

    if (num2 == 0)
        printf("Divisão não é permitida\n");

    else if (num1 % num2 == 0) // % é a sobra da divisão entre num1 e num2.
        printf("É divisível.\nResultado: %i\n", num1 / num2);

    else
        printf("Não é divisível\n");

    return 0;
}