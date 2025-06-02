#include <stdio.h>
/*
    Write a program to count the blanks, tabs, and newlines
*/
int main(void)
{
    int blanks, tabs, newlines;
    blanks = 0;
    tabs = 0;
    newlines = 0;
    int c;
    // Now initiate taking inputs from the user
    while((c = getchar()) != EOF)
    {
        if (c == ' ')
        {
            blanks++;
        }
        else if (c == '\t')
        {
            tabs++;
        }
        else if (c == '\n')
        {
            newlines++;
        }
    }
    printf("There are %i blanks, %i tabs, and %i newlines\n", blanks, tabs, newlines);
    return 0;
}