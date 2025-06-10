#include <stdio.h>
#include <limits.h>
#include <math.h>

/*
    Write a program to determine the ranges of char, short, int and long
    variables, both signed and unsigned, by printing appropriate values from 
    standard headers and by direct computation. Harder if you compute them: determine
    the ranges of various floating-point types
*/

void range(short sign, int size);
// values form the standard headers
int main(void)
{
    printf("The range of char is %i to %i\n", CHAR_MIN, CHAR_MAX);
    printf("The range of short is %i to %i\n", SHRT_MIN, SHRT_MAX);
    printf("The range of int is %i to %i\n", INT_MIN, INT_MAX);
    printf("The range of unsigned short is 0 to %lu \n", USHRT_MAX);
    printf("The range of unsigned int is 0 to %lu \n\n\n", UINT_MAX);

    printf("The range of unsigned short is ");
    range(0, sizeof(unsigned short));

    printf("The range of signed short is ");
    range(1, sizeof(signed short));

    printf("The range of unsigned int is ");
    range(0, sizeof(unsigned int));
    return 0;
}

void range(short sign, int size)
{
    // Direct computation
    /*
        for direct we need to know 2 things
        1. the number of bits the type uses (n)
        2. Wheter its signed or unsigned

        signed type
        ==> range = [-2^(n-1), 2^(n-1) - 1]

        unsigned type
        ==> range = [0, 2^(n-1)]
    */

    long long max, min;
    size = size * 8;
    if (!sign)
    {
        min = 0;
        max = (pow(2, size)) - 1;
    }

    else
    {
        size = size - 1;
        min = (pow(-2, size));
        max = (pow(2, size)) - 1;

    }
    printf("%lld to %lld\n", min, max);
    return;
    
    
}