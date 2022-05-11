#include "difference_of_squares.h"

unsigned int sum_of_squares(unsigned int number)
{
    int total = 1;
    int num = 1;
    int soma = 0;

    for(unsigned int i = 1; i <= number; i++)
    {
        for(int i = 1; i <= 2; i++)
        {
            total *= num; //Potenciação
        }
        soma += total; // Soma o resultado das potencias
        num++;
        total = 1;
    }
    return soma;
}

unsigned int square_of_sum(unsigned int number)
{
    int total = 0;
    int num = 1;
       
        // Somar os números de 1 até o numero indicado na função
        for(unsigned int i = 1; i <= number; i++)
        {
            total += i; 
        }    

        for(int i = 1; i <= 2; i++)
        {
            num *= total; // Calcula o resultado da soma dos números ao quadrado
        }

    return num;
}


unsigned int difference_of_squares(unsigned int number)
{
    return (square_of_sum(number) - sum_of_squares(number));
}
