#include <stdio.h>

/*
    Print the character in lowercase
*/

void lower(char);

int main(void)
{
    char test = 'B';
    lower(test);
}

void lower(char c)
{
    if (c >= 'A' && c <= 'Z')
    {
        c = c + 'a' - 'A';
    }
    printf("%c\n", c);
    return;
}