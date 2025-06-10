#include <stdio.h>

/*
    In a two's complement number system,
    x &= (x - 1) deletes the rightmost 1-bit in x
    Using this observation to write a faster version of bitcount
*/

int bitcount(unsigned);

int main(void)
{
    int count = bitcount(3);
    printf("%i\n", count);
    return 0;
}

int bitcount(unsigned n)
{
    int i = 0;
    while (n != 0)
    {
        n &= (n - 1);
        i++;
    }
    return i;
}