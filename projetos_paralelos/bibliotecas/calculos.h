int potenciacao(int num, int expoente)
{

    int contador,resultado;

    

    resultado = num;
    
    for (contador = 1; contador < expoente; ++contador){
        resultado *= num;
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
        x = (x + num / x) / 2;
    };

    return x;
}