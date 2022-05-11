#include <stdio.h>

int main() 
{
    int minhaIdade = 18;
    int idadeAmigo = 22;
    int idadePai = 45;
    int idadeIrmao = 11;

    int totalIdade;
    totalIdade = minhaIdade + idadeAmigo + idadePai + idadeIrmao;

    int mediaIdade = totalIdade / 4 ;

    printf(" A soma das idades é %i\n\n E a médias das idade é %i\n",totalIdade,mediaIdade);
    return 0;
}