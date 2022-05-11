#include <stdio.h>

//Função recursiva é uma função que chama ela mesma.

int main (void)
{
    int fatorial (int x);
    int numero, resultado;

    printf("Digite um número inteiro: ");
    scanf("%i", &numero);    

    resultado = fatorial(numero);

    printf("O fatorial é: %i\n", resultado);

    return 0;
}

int fatorial (int x)
{
    int resultado;

    if(x == 0)
        return 1;

    else
        resultado = x * fatorial(x-1);

    return resultado;
}