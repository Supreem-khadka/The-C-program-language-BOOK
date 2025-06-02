#include <stdio.h>
#define MAX 1000
/*
    Write a function reverse(s) that reverses the character string s
    Use it to write a program that reverses its input one line at a time
*/

void reverse(char s[], char out[]);

int main(void)
{
    char s[MAX];
    char out[MAX];
    int c, i;

    for (i = 0; i < MAX && (c = getchar()) != '\n' ; i++)
    {
        s[i] = c;
    }
    s[i] = '\0';  
    reverse(s, out);
    printf("%s\n", out);
}

void reverse(char s[], char out[])
{
    int i, length;
    for (i = 0; s[i] != '\0'; i++)
    {
        length = i;
    }

    for (i = length; i >= 0; i--)
    {
        out[length - i] = s[i];
    }
    out[length + 1] = '\0';

}