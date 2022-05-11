#include <stdio.h>

int main ()
{
    float nota[5] = {0};
    float total = 0;
    float media = 0;

    for(int contador = 0; contador < 5; contador++)
    {
        printf("Informe a nota %i: ",contador+1);
        scanf("%f", &nota[contador]);
        total +=  nota[contador];
    }

    media = total/5;

    printf("A soma das notas é %f e a média é %f\n", total, media);
    return 0;
}