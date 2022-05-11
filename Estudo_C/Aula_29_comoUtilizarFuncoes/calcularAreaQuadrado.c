#include <stdio.h>

int main(void)
{

    float lado;
    printf("Informe o valor do lado do quadrado: ");
    scanf("%f", &lado);

    float calcularAreaQuadrado(float x);
    calcularAreaQuadrado(lado);
    return 0;
}

float calcularAreaQuadrado(float x)
{
    float areaQuadrado = x * x;
    printf("%f\n", areaQuadrado);
}