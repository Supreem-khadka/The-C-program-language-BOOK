#include <stdio.h>

/*
    Count lines, words, and characters in input
*/

#define IN 1
#define OUT 0


int main(void)
{
    int c, nl, nw, nc, state;
    state = OUT;
    nl = nw = nc = 0;
    
    while ((c = getchar()) != EOF)
    {
        nc++;
        if (c == '\n')
        {
            nl++;
        }
        if (c == ' ' || c == '\n' || c == '\t')
        {
            state = OUT;
        }
        else if (state == OUT)
        {
            state = IN;
            nw++;
        }
    }
    printf("New line -> %i\nCharacters -> %i\nWords -> %i\n", nl, nc, nw);
    return 0;
}