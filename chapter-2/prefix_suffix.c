#include <stdio.h>

/*
    Using the increment operator in both the
    prefix and the suffix
*/


int main(void)
{
    int n = 5;
    int x;
    x = n++;
    printf("x = %i, n = %i\n", x, n);

    n = 5;
    x = ++n;
    printf("x = %i, n = %i\n", x, n);
    return 0;
}