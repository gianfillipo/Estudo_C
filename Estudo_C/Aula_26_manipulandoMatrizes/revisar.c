#include <stdio.h>

int main()
{
    int matriz[5][5] = {1, 2, 3, 4, 5,
                        6, 7, 8, 9, 10,
                        11, 12, 13, 14, 15,
                        16, 17, 18, 19, 20};

    /* Printar todos os números linha por linha
    for(int cont = 0,cont2 = 0; cont < 4; cont++){

        printf("\n");
        for(;cont2 <= 4; cont2++)
        printf("%i,",matriz[cont][cont2]);

        cont2 = 0;
    }
    */

    for (int cont = 0, cont2 = 0; cont <= 4; cont++)
    {

        printf("\n");
        printf("Coluna %i:", cont+1);
        for (; cont2 < 4; cont2++)
            printf(" %i, ",matriz[cont2][cont]);
        cont2 = 0;
    }
}