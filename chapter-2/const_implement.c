#include <stdio.h>
/*
    This program throws an error, and that is what it is supposed to do
    Read the error
*/
void greetings(const char[]);

int main(void)
{
    const char greet[] = "Hello world";
    greetings(greet);
    return 0;
}

void greetings(const char g[])
{
    printf("%s\n", g);
    g[1] = "N";
    return;
}