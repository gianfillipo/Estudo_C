#include <stdio.h>

int main()
{
    long int resultado, num1;

    for (num1 = 1; num1 <= 10; num1++)
    {
        resultado = num1;
        for (int num2 = 0; num2 <= 10; num2++)
        {
            if (num2 == 0)
            {
                resultado = 1;
            }
            else if (num2 == 1)
            {
                resultado = num1;
            }
            else
            {
                resultado *= num1;
            }
            printf("%li ^ %i = %li\n", num1, num2, resultado);
        }
        printf("\n\n");
    }

    return 0;
}