/**
 * Linear search for an element in an array
*/

#include <stdio.h>

int main(void)
{
    // An array of numbers
    int numbers[] = {4, 8, 50, 16, 23, 42};

    // Search for 8
    for(int i = 0; i < 6; i++)
    {
        if(numbers[i] == 8)
        {
            printf("Found at index %i\n.", i);
            return 0;
        }
    }

    printf("Not found.\n");
    return 1;
}
