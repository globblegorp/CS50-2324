/**
 * Counts down from 9
*/
#include <stdio.h>
#include <unistd.h>

int main(void)
{
    // Initialize and array to hold our counting number
    int countdown[10] = {9, 8, 7, 6, 5, 4, 3, 2, 1, 0};

    // Print out each element in the array
    for(int i = 0; i < 10; i++)
    {
        printf("%i\n", countdown[i]);
        sleep(1);
    }
}