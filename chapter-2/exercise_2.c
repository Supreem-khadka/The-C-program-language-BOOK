#include <stdio.h>

/*
    Write the equivalent of the for loop from getline function of chapter 1 without using
    logical operator
*/

#define limit 150

int main(void)
{
    
    char text[limit];
    int c;
    int i;
    for (i = 0; i < limit - 1; i++)
    {
        if ((c = getchar()) != '\n')
        {
            if (c != EOF)
            {
                text[i] = c;
            }
            else
            {
                break;
            }
        }
        else
        {
            break;
        }
    }
    text[i] = '\0';

    printf("%s\n", text);
    return 0;
}