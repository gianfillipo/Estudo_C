#include <stdio.h>

int main()
{
    int i = 0;
    

    while (i != 0) //Não vai ser executado
    {
        i--;
        printf("Teste\n");
    }

    do { // Vai ser executado pelo menos uma vez
        
        printf("Teste 2\n");

    } while (i != 0);


    return 0;
}