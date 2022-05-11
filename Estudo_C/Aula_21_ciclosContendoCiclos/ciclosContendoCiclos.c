#include <stdio.h>

int main()
{
    for (int i = 1; i <= 10; ++i)
    {
        printf("\n\n**Volta %i**\n\n",i); 
        for (int j = 1; j <= 10; ++j){ //Antes de passar para a próxima execução o programa vai executar o ciclo interno dez vezes
            printf("Ponto %i\n", j);
        }
    }

    return 0;
}