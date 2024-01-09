/**
 * Recursively find the sum from 1 to n, provided by the user
*/

#include <cs50.h>
#include <stdio.h>

// Function prototype
int sigma(int n);

int main(void)
{
    // Get a positive integer from the user
    int n;
    do
    {
        n = get_int("Positive integer: ");
    }
    while (n < 1);

    // Find the sum from 1 to n
    printf("The sum from 1 to %i is %i.\n", n, sigma(n));
}

int sigma(int n)
{
    // Base case
    if (n == 1)
        return 1;

    // Recursive case
    return n + sigma(n - 1);
}
