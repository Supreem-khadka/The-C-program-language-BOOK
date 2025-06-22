#include <stdio.h>
#define N 10
/*
    A binary search program to search for an element x in the array V or size n
*/

int binary_search(int x, int v[]);

int main(void)
{
    int v[N] = {1, 5, 8, 9, 13, 19, 21, 25, 40, 54};
    int x = 9;
    int res = binary_search(x, v);
    if (res > -1)
    {
        printf("The item %i, has been found at the index %i\n", x, res);
    }
    return 0;
}


int binary_search(int x, int v[])
{
    int low, mid, high;
    low = 0;
    high = N - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        printf("index %i, value %i\n", mid, v[mid]);
        if (x < v[mid])
        {
            high = mid - 1;
        }
        else if (x > v[mid])
        {
            low = mid + 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}