#include <stdio.h>
#include <math.h>
#include <string.h>

/*
    Write a function htoi(s), which converts a string of hexadecimal digits into 
    its equivalent integer value.
*/

int htoi(char[]);


int main(void)
{
    char hex[] = "0x123abAD3";
    int dec = htoi(hex);
    printf("%i\n", dec);    
    return 0;
}

int htoi(char hex[])
{
    // removing the trailing "0x" or "0X"
    if (hex[0] == '0' && (hex[1] == 'x' || hex[1] == 'X'))
    {
        hex = (char *)(hex + 2);
    }
    int dec = 0;
    int index = strlen(hex) - 1;

    for (int i = index; (i >= 0) && (hex[i] >= '0' && hex[i] <= '9') || (hex[i] >= 'A' && hex[i] <= 'F') || (hex[i] >= 'a' && hex[i] <= 'f'); i--)
    {
        if(hex[i] >= '0' && hex[i] <= '9')
        {
            dec += (hex[i] - '0') * pow(16, (index - i));
        }
        else
        {
            if (hex[i] >= 'A' && hex[i] <= 'F')
            {
                dec += ((hex[i] - 'A') + 10) * pow(16, index - i);
            }
            else
            {
                dec += ((hex[i] - 'a') + 10) * pow(16, index - i);
            }
        }

    }
    return dec;
}