#include <stdio.h>


int main ()
{
    int x;
    
    void imprimaMensagem(void);
    imprimaMensagem();
    
    x = 10;

    return 0;
}

void imprimaMensagem(void)
{
    printf("teste");
}
// É recomendado declarar as funções usadas na função main para melhorar a legibilidade do código.