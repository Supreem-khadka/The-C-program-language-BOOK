#include <stdio.h>
#include <string.h>

/*
    Write the function strindex(s, t) which returns the position of the
    rightmost occurence of t in s, or -1 if there is  none
*/

int strindex(char[], char[]);

int main(void)
{
    char s[] = "he i am he from he";
    char t[] = "e";
    int index = strindex(s, t);
    if (index >= 0)
    {
        printf("The index of the rightmost occurance is %i\n", index);
    }
    return 0;
}

int strindex(char s[], char t[])
{
    int s_len = strlen(s);
    int t_len = strlen(t);
    int i, j, k;
    for (i = (s_len - 1); i >= 0; --i)
    {
        for (k = i, j = (t_len - 1); j >= 0 && s[k] == t[j]; --j, --k)
        {
            ;
        }
        if (j < 0)
        {
            return (k + 1);
        }
    }
    return -1;
}