#include <stdio.h>
#define MAXLINE 1000

int get_line(char line[], int maxline);
void copy(char dest[], char source[]);

int main(void)
{
    int len;
    int max;
    char line[MAXLINE];
    char longest[MAXLINE];

    max = 0;
    while((len = get_line(line, MAXLINE)) > 0)
    {
        if (len > max)
        {
            max = len;
            copy(longest, line);
        }
    }

    if (max > 0)
    {
        printf("%s\n", longest);
    }
    return 0;
}

int get_line(char line[], int maxline)
{
    int c, i;

    for (i = 0; i < maxline - 1 && (c = getchar()) != EOF && c != '\n'; i++)
    {
        line[i] = c;
    }
    if (c == '\n')
    {
        line[i] = c;
        i++;
    }
    line[i] = '\0';
    return i;
}


void copy(char dest[], char source[])
{
    int i = 0;
    while ((dest[i] = source[i]) != '\0')
    {
        i++;
    }
}