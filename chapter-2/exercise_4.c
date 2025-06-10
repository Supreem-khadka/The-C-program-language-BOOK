#include <stdio.h>

/*
    Write an alternate version of squeeze(s1, s2) that deletes 
    each character in s1 that matches any character in the 
    string s2
*/

void squeeze(char[], char[]);


int main(void)
{
    char sent[] = "Hello Samdhi";
    char chars[] = "eoa";
    printf("%s\n", sent);
    squeeze(sent, chars);
    printf("%s\n", sent);
    return 0;
}

void squeeze(char s1[], char s2[])
{
    int i, j, k, count;
    k = count = 0;
    for (i = 0; s1[i] != '\0'; i++)
    {
        for (j = 0; s2[j] != '\0'; j++)
        {
            if (s1[i] == s2[j])
            {
                count++;
            }
        }
        if (!count)
        {
            s1[k++] = s1[i];
        }
        count = 0;
    }
    s1[k] = '\0';
    return;
}