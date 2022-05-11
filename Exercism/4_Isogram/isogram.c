#include "isogram.h"



bool is_isogram(const char *a)
{
    // Caso a string seja null, retornamos falso evitando um erro de memória.
    if( a == NULL){
        return false;
    }

    int tamanhoVetor = strlen(a);

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
