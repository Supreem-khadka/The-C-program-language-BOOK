#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float i, j;
    char *string = malloc(10*sizeof(char));

    printf("Enter a string: ");
    scanf("%s", string);
    printf("The user supplied string-> %s\n", string);
    return 0;
    
}