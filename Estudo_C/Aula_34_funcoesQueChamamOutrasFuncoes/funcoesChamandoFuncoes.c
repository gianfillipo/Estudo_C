#include <stdio.h>

int main(void)
{

    float soma, num1, num2;

    printf("\nInforme o primeiro número: ");
    scanf("%f", &num1);

    printf("\nInforme o segundo número: ");
    scanf("%f", &num2);

    // Declarando as funções (Boas práticas)
    float somaDeDigitos(float num1, float num2);

    soma = somaDeDigitos(num1,num2);

    printf("\n\n Resultado: %f", soma);

    return 0;
}

float somaDeDigitos(float num1, float num2)
{
    float valorAbsoluto(float x);
    
    if (num1 < 0)
    
        num1 = valorAbsoluto(num1);
    
    if (num2 < 0) 
        num2 = valorAbsoluto(num2);
    
 
    return num1 + num2;
}

float valorAbsoluto(float x)
{
    return x * -1;
}