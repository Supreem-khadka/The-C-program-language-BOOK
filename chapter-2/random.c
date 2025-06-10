#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
    Generate a pseudo random number
*/

int main(void)
{
    time_t current_time;
    current_time = time(NULL);
    srand((unsigned int) current_time);
    unsigned int random;
    random = rand();
    printf("%i\n", random);
    return 0;
}