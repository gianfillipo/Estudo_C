#include <stdio.h>

int main (void) 
{
    void teste(void);
    teste();    
    teste();

    return 0;
}
//Função void não retorna nenhum valor.

void teste(void)
{
    int variavelLocalAutomatica = 2; // Essa variável é visível apenas para a função teste.
    variavelLocalAutomatica *= 2; // Toda vez que chamamos a função teste, essa variável é recriada.
    
    printf("%i\n", variavelLocalAutomatica);

}
