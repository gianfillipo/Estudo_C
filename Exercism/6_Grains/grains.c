#include "grains.h"

uint64_t square(uint8_t index){
    
    long int num = 1;
    
    if(index > 64 || index < 1)
        return 0;
    
    for(int i = 1; i < index; i++)
    {
        num *= 2;
    }

    return num;
}

uint64_t total(void){
    long int num = 1;

    for(int i = 1; i <= 65; i++){
        num *=2;
    }

    return num-1; // A soma de todos os números de 2**0 até 2**64 é igual a 2**65 - 1
}