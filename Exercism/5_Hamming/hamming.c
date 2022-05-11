#include "hamming.h"


int compute(const char *lhs, const char *rhs){

    int tamanho_a,tamanho_b, numero_diferenca;

    tamanho_a = strlen(lhs);
    tamanho_b = strlen(rhs);
    numero_diferenca = 0;

    
    
    if(tamanho_a != tamanho_b)
        return -1;

    else{
        for(int i = 0; i < tamanho_a; i++){
            if(lhs[i] != rhs[i])
                numero_diferenca++;
        }
    }
    return numero_diferenca;
}
