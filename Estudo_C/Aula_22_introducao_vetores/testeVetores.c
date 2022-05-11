#include <stdio.h>

int main()
{
    int vetor[5];
    int num = 1;

    for (int i = 0; i < 5; ++i)
    {
        vetor[i] = num;
            printf("%i\n", vetor[i]);
                num++;
    }

    return 0;
}