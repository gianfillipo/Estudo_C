#include "square_root.h"

int square_root(int radicand)
{
    int result_of_square = 0;
    int num1 = 0;
    int square = 1;
    int count = 10000;

    for (; result_of_square != radicand && count >= 1; num1++)
    {
        for (int i2 = 0; i2 < 2; i2++)
        {
            square *= num1;
        }
        result_of_square = square;
        square = 1;
        count--;
    }

    return num1-1;
}
