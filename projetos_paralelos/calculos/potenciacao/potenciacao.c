#include <stdio.h>

int potenciacao(int num, int expoente)
{

    int contador,resultado;

    

    resultado = num;
    
    for (contador = 1; contador < expoente; ++contador){
        resultado *= num;
    }


    return resultado;
}

int main() 
{
    int num, expoente;

    printf("Informe o número: ");
    scanf("%i",&num);

    printf("Informe o expoente: ");
    scanf("%i",&expoente);

    num = potenciacao(num,expoente);

    printf("%i\n",num);

    return 0;
}