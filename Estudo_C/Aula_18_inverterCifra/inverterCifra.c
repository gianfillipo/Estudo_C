#include <stdio.h>

int main()
{
    int num, cifra;

    scanf("%i", &num);

    if (num >= 0)
    {
        do
        {
            cifra = num % 10;
            printf("%i", cifra);
            num /= 10;

        } while (num >= 1);
        printf("\n");
    }

    else
    {
        num *= -1;   // Transforma o número em positivo
        printf("-"); // Printa o símbolo de menos para representar o número negativo
        do
        {
            cifra = num % 10;
            printf("%i", cifra);
            num /= 10;

        } while (num >= 1);
        printf("\n");
    }

    return 0;
}