#include <stdio.h>

int main()
{
    for(int num1 = 1; num1 <= 10; num1++)
    {
        for(int num2 = 1; num2 <= 10; num2++){
            printf("%i x %i = %i\n",num1 , num2, num1 * num2);
        }
        printf("\n\n");
    }
}