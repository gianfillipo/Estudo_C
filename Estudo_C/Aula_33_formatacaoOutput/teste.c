#include <stdio.h>

int main() {

    int x;

    printf("Informe um número em hexadecimal: ");
    scanf("%x", &x);

    printf("O número %i em base 10 é %o", x, x);

    return 0;
}