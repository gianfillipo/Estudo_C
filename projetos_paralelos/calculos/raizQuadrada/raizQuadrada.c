#include <stdio.h>

int raizQuadrada(int num)
{

    int x;
    int i;

    x = num;

    for (i = 0; i < 10; i++)
    {
        x = (x + num / x) / 2;
    };

    return x;
}



int main()
{
    int num;

    printf("Informe a raíz:");
    scanf("%i",&num);

    printf("\n%i\n",raizQuadrada(num));

    return 0;
}