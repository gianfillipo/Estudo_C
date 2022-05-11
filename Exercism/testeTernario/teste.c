#include <stdio.h>

int main(void)
{
    int array[10];
    int array2[2];

    for (int i = 0; i < 5; i++)
    {
        for (int i2 = 0; i2 < 3; i2++)
        {
            array[i2] = i2+5;
        }
        array[i] = [array2[i]]
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%i\n", array[i]);
    }
}