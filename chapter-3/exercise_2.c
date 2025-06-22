#include <stdio.h>

/*
    Write a function escape(s, t) that converts characters like newline and tab
    visible escape sequences like /n and /t as it copies the string t to s.
    -> Use a switch
*/

void escape(char[], char[]);


int main(void)
{
    char s[] = "Hello world\nhow are you doing\tmy\tfriend";
    char t[100];
    escape(s, t);
    printf("%s\n%s\n", s, t);
}

void escape(char s[], char t[])
{
    int j = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        switch(s[i])
        {
            case '\n':
                t[j] = '\\';
                t[++j] = 'n';
                ++j;
                break;

            case '\t':
                t[j] = '\\';
                t[++j] = 't';
                ++j;
                break;

            default:
                t[j] = s[i];
                ++j;
                break;
        }
    }
    t[j] = '\0';
}

