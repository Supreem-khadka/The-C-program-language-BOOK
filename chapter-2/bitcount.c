#include <stdio.h>

/*
    Counts 1 bits in x
*/

int bitcount(unsigned);

int main(void)
{
    int count = bitcount(5);
    printf("%i\n", count);
    return 0;
}

int bitcount(unsigned x)
{
    int b;

    for (b = 0; x!= 0; x >>= 1)
    {
        if (x & 01)
        {
            b++;
        }
    }
    return b;
}