#include <stdio.h>

int main()
{
    int matriz [5] [5] = {{1,2,3,4,5},
                          {6,7,8,9,10},
                          {11,12,13,14,15},
                          {16,17,18,19,20},
                          {21,22,23,24,25}};


// Printando as linhas
    printf("Print linhas\n");
    for(int contador = 0; contador < 5; contador++){
        for(int contador2 = 0; contador2 < 5; contador2++){
            printf("%i, ", matriz[contador][contador2]);
        }
        printf("\n\n");
    }

    printf("\n\n");
    
    printf("Print colunas\n");
// Printando as colunas
    for(int contador = 0; contador < 5; contador++){
        for(int contador2 = 0; contador2 < 5; contador2 ++){
            printf("%i\n", matriz[contador2][contador]);
        }
        printf("\n\n");
    }

    return 0;
}