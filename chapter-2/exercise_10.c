#include <stdio.h>

/*
    Rewrite the function lower, which converts upper case
    letters to lower case with a conditional expression
    instead of if-else
*/

char lower(char);

int main(void)
{
    char test = 'Z';
    printf("Lower -> %c", lower(test));
    return 0;
}

char lower(char conv)
{
    char c;
    c = (conv >= 'A' || conv <= 'Z') ? conv + 'a' - 'A' : conv;
    return c;
}
