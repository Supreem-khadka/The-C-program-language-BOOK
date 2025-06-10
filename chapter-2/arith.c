#include <stdio.h>

/*
    Experiment with arithmetic operators
*/

int main(void)
{
    float a, b;
    a = 10;
    b = 3;
    printf("a + b is %f\n", (a + b));
    printf("a - b is %f\n", (a - b));
    printf("a * b is %f\n", (a * b));
    printf("a / b is %f\n", (a / b));
    printf("a %% b is %i\n", ((int)a % (int)b));



    return 0;
}   