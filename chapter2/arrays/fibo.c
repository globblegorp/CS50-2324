/**
 * List the first 25 Fibonacci numbers
*/

#include <stdio.h>

int main(void)
{
    // Declare an array and store the first two fibo terms
    int fibo[25];
    fibo[0] = 1;
    fibo[1] = 1;

    // Loop through to fill in the rest
    for (int i = 2; i < 25; i++)
    {
        // Add the two previous terms
        fibo[i] = fibo[i - 1] + fibo[i-2];
    }

    // Print out all elements in the array
    for (int i = 0; i < 25; i++)
    {
        printf("%i\n", fibo[i]);
    }
}