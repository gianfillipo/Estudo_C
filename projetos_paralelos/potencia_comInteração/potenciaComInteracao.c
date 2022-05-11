#include <stdio.h>

int main()
{
    int num, exp, resultado;

    printf("Informe o número: ");
    scanf("%i", &num);

    printf("Informe até qual expoente gostaria de calcular: ");
    scanf("%i", &exp);

    resultado = num;

    for (int contador = 0; contador <= exp; contador++)
    {
        if (contador == 0)
        {
            resultado = 1;
        }
        else if (contador == 1)
        {
            resultado = num;
        }
        else
        {
            resultado *= num;
        }
        printf("\n%i ^ %i = %i\n", num, contador, resultado);
    }

    return 0;
}