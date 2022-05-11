#include <stdio.h>
#include<stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>


bool is_isogram(const char *a)
{
    
    if( a == NULL){
        return false;
    }


    long int tamanhoVetor = strlen(a);
    
    for (int i = 0; i < tamanhoVetor; i++)
    {
        for (int i2=i+1; i2 < tamanhoVetor; i2++)
        {
            if (tolower(a[i]) == tolower(a[i2]) && a[i]!= '-' && a[i]!=' ')
                return false;
        }
    }
    return true;
}


int main (){
    char string[20];
    char string2[20];


    printf("Escreva uma palavra: ");
    fgets(string, 20, stdin);;


    if(is_isogram("")){
        printf("\n\nÉ um isograma\n");
    }else{
        printf("\n\nNão é um isograma\n");
        printf("%s", string2);
    }

    return 0;
}