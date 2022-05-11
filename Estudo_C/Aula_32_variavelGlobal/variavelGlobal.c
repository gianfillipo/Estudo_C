#include <stdio.h>

int gVariavelGlobal = 2; // Utilizar o g na frente como boa prática, ao criar uma variável global.

int main (void)
{
    void teste (void);
    gVariavelGlobal *= 2;
    printf("Global = %i\n", gVariavelGlobal);
    teste();
    teste();
    teste();

    return 0;
}

void teste (void)
{
    int variavelLocalAutomatica = 2;
    variavelLocalAutomatica *= 2;

    static int variavelLocalEstatica = 2;
    variavelLocalEstatica *= 2;

    printf("Local Automatica = %i\n", variavelLocalAutomatica);
    printf("Local Estatica = %i\n", variavelLocalEstatica);
    printf("Global = %i\n", gVariavelGlobal);
}
