#include <stdio.h>
#include <string.h>

void itoa(int, char[]);

int main(void)
{
    char s[10];
    itoa(53, s);
}

void itoa(int n, char s[])
{
    int i;
    i = 0;
    do
    {
        s[i++] = (n % 10) + '0';
    } while((n /= 10) > 0);
    s[i] = '\0';
    strrev(s);
    printf("%s\n", s);
    return;
}