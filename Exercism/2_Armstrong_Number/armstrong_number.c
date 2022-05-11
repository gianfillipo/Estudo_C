#include "armstrong_number.h"

bool is_armstrong_number(int candidate)
{

    // Calcular tamanho do número.
    int contadorNumero = candidate;
    int tamanhoNum = 0;
    while (contadorNumero != 0)
    {
        contadorNumero /= 10;
        tamanhoNum++;
    }

    // Calcular Potência e somar.
    int mult = 1;
    int potencia = tamanhoNum;
    int total = 0;
    contadorNumero = candidate;
    while (contadorNumero != 0)
    {
        while (potencia != 0)
        {
            mult *= (contadorNumero % 10);
            potencia--;
        }
        total += mult;
        mult = 1;
        contadorNumero /= 10;
        potencia = tamanhoNum;
    }

    if (total == candidate)
        return true;

    else
        return false;
}
