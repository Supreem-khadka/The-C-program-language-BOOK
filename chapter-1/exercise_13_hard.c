#include <stdio.h>

/*
    Write a program to print a histogram of the lengths of words in its input
    it is easy to draw the histogram with the bards horizontal; a vertical orientation is more challenging
*/

#define MAX 10

int main(void)
{
    int c;
    int histo[MAX];
    int i;
    int length = 0;
    int max_length = 0;
    // zero out the array
    for (i = 0; i < MAX; i++)
    {
        histo[i] = 0;
    }

    // take the input
    while ((c = getchar()) != EOF)
    {
        //Count the length of the words and store it in the array
        if (c == ' ' || c == '\n' || c == '\t')
        {
            if (length > 0 && length < 11)
            {
                histo[length - 1]++;
                length = 0;
            }
        }
        else
        {
            length++;
        }
    }

    // print the max length
    for (i = 0; i < MAX; i++)
    {
        if (histo[i] > max_length)
        {
            max_length = histo[i];
        }
    }
   
    // print the histogram
    for (i = max_length; i > 0; i--)
    {
        // loop around the array
        for (int j = 0; j < MAX; j++)
        {
            if (histo[j] >= i)
            {
                printf(" |");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }


    for (i = 1; i <= MAX; i++)
    {
        printf(" _");
    }

    printf("\n");

    for (i = 1; i <= MAX; i++)
    {
        printf(" %i", i);
    }

    return 0;
}