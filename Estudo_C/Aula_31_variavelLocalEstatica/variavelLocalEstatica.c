#include <stdio.h>

int main (void) {
    
    void teste(void);
    teste();
    teste();
    teste();

    return 0;
}

void teste(void)
{
    int variavelLocalAutomatica = 2;
    variavelLocalAutomatica *= 2;

    static int variavelLocalEstatica = 2; // A variável preserva o seu valor e não é recriada toda vez que a função teste é chamada.
    variavelLocalEstatica *= 2 ;

    printf("Variável local automatica: %i\n", variavelLocalAutomatica);
    printf("Variável local estática: %i\n", variavelLocalEstatica);

}