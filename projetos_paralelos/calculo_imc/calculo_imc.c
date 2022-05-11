#include <stdio.h>

int main()
{
    float peso;
    float altura;


    

    printf("Informe seu peso:");
    scanf("%f",&peso);

    printf("Informe sua altura:");
    scanf("%f",&altura);

    int resultado = peso/(altura*altura);
    printf("Seu imc é %i\n",resultado);


    return 0;
}