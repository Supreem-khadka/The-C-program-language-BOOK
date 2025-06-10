#include <stdio.h>

/*
    Concatenate t to end of s; s must be big enough
*/

void strcat(char[], char[]);

int main(void)
{
    char h[] = "Hello ";
    char g[] = "samdhi";
    strcat(h, g);
    printf("%s\n", h);
    return 0;
}


void strcat(char s[], char t[])
{
    // find the end of the string s i.e. \0, then add the chars 
    // from t till the end of t is reached
    int i, j;
    i = j = 0;
    while(s[i++] != '\0'); // find the end of s
    i--;
    while((s[i++] = t[j++]) != '\0');
    return;
}