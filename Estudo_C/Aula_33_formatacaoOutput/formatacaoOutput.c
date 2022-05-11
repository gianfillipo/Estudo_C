#include <stdio.h>

int main (void)
{

    int intVar = 999999;
    int intVar2 = 10;
    int x = 0xA;
    double doubleVar = 100.123456789;

    printf("Variavel inteira (%%d) = %7d\n", intVar2); // Base 10
    printf("Variavel inteira (%%i) = %i\n", intVar); // Inteiro
    printf("Variavel inteira (%%x) = %x\n", intVar); // Base 16
    printf("Variavel inteira (%%o) = %o\n", intVar);
    

}