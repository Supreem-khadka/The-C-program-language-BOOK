#include <stdio.h>

int main(void)
{
    float fahr, celsius;
    float lower, upper, step;

    lower = 1;
    upper = 300;
    step = 20;

    fahr = lower;
    printf(" --------------\n");
    printf("|  F   |   C   |\n");
    while (fahr <= upper)
    {
        printf(" --------------\n");
        celsius = (5.0 / 9.0) * (fahr - 32.0);
        printf("| %3.0f | %6.1f |\n", fahr, celsius);
        fahr = lower * step;
        lower++;    
    }
    printf(" --------------\n");
}