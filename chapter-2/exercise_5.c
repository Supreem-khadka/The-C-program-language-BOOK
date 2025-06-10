#include <stdio.h>

/*
    Write a function any(s1, s2), which returns the first location
    in string s1 where any character from string s2 occurs, of -1
    if s1 contains no characters from s2.
*/

int any(char[], char[]);

int main(void)
{
    int ret_index;
    char a[] = "Hello samdhi";
    char b[] = "slm";
    ret_index = any(a, b);
    if (ret_index != -1)
    {
        printf("The index of the first occurence is %i\n", ret_index);
    }
    return 0;
}

int any(char s1[], char s2[])
{
    int i, j;
    for (i = 0; s1[i] != '\0'; i++)
    {
        for (j = 0; s2[j] != '\0'; j++)
        {
            if (s1[i] == s2[j])
            {
                return i;
            }
        }
    }
    return -1;
}