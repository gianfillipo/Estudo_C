int potencia(int num, int exp)
{
    int resultado = num;

    for (int contador = 0; contador <= exp; contador++)
    {
        if (contador == 0)
        {
            resultado = 1;
        }
        else if (contador == 1)
        {
            resultado = num;
        }
        else
        {
            resultado *= num;
        }
    }

    return resultado;
}

int raizQuadrada(int num)
{

    int x;
    int i;

    x = num;

    for (i = 0; i < 10; i++)
    {
        x = (x + num / x) / 2; // Método RAPHSON de Newton (Raíz quadrada).
    };

    return x;
}


