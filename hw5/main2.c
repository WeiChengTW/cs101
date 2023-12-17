#include <stdio.h>

int main()
{
    int x = 1; 
    double pi = 0.0;

    while ((int)(pi * 100000) != 314159)
    {
        double term = 4.0 / (2 * x - 1);
        if (x % 2 == 1)
        {
            pi += term;
        }
        else
        {
            pi -= term;
        }

        x++;
    }
    printf("X= %d\n", x);
    // printf("Pi= %.6f\n", pi);
    // printf("100000Pi= %d\n", (int)(pi * 100000));
    return 0;
}

