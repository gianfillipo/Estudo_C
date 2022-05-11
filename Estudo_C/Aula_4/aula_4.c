#include <stdio.h>

int main()
{
// Introduzindo variáveis
    // variável número inteiro
    int minhaIdade; //Declarando o tipo 
    minhaIdade = 18;
    // Devemos colocar %i depois fora das aspas declarar qual a variável
    printf("Minha idade é %i anos \n", minhaIdade);

    // Escrevendo uma variável string
    char nome[20] = "Gian";
    //Ao invés de %i, utilizamos %s de String.
    printf("%s \n",nome);
    return 0;
}