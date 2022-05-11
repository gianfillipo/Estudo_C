#include <stdio.h>

// Author : Gian Fillipo Camurça Angelo

int functionPower(int a, int exp)
{
    int num = 1;

    for (int i = 0; i < exp; i++)
    {
        num *= a;
    }

    return num;
}

int testPythagorean(int a, int b, int c)
{
    int trueOrFalse, notZero, isPythagorean;


    notZero = (a != 0 && b != 0 && c != 0) ? 1 : 0;
    isPythagorean = functionPower(a, 2) + functionPower(b, 2) == functionPower(c, 2);


    trueOrFalse = isPythagorean && notZero == 1 ? 1 : 0;

    return trueOrFalse;
}

int listSumEqualNum()
{

    int a = 0, b = 0, c = 0, d = 0;
    int N = 840;
    int dontDuplicate, sumIsEqual;


    int count = 1;

    while (a <= 999)
    {
        while (b <= 999)
        {
            while (c <= 999)
            {
                dontDuplicate = a < b && b < c;
                sumIsEqual = a + b + c == N;

                if (sumIsEqual && dontDuplicate && testPythagorean(a, b, c) == 1)
                {
                    printf("Solução %i: A = %i, B = %i, C = %i  A+B+C = %i \n\n", count, a, b, c, N);
                    count ++;
                }
                c++;
            }
            c = 0;
            b++;
        }
        b = 0;
        a++;
    }
}

int main()
{

    listSumEqualNum();

    return 0;
}
