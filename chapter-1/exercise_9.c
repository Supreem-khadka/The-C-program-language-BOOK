#include <stdio.h>

/*
    Write a program to copy its input to its output, replacing each string of one or more blanks
    by a sigle blank
*/

int main(void)
{
    int c;
    int bc = 0;
    char blank = ' ';
    while((c = getchar()) != EOF)
    {
        if (c == ' ' || c == '\t')
        {
            bc++;
        }
        else
        {
            if (bc > 0)
            {
                putchar(' ');
            }
            bc = 0;
            putchar(c);
        }
    }

}