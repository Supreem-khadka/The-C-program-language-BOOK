#include <stdio.h>

int main(void)
{
    int fahr, celsius;
    int lower, upper, step;

    lower = 1;
    upper = 300;
    step = 20;

    fahr = lower;
    while (fahr <= upper)
    {
        printf("-------------\n");
        celsius = 5 * (fahr - 32) / 9;
        printf("| %3i | %3i |\n", fahr, celsius);
        fahr = lower * step;
        lower++;
    }
    printf("-------------\n");
}