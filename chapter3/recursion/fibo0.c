/**
 * Recursive implemenation that lists the first 25 Fibonacci numbers
*/
#include <stdio.h>

#define N 25

// Function prototype
int fibo(int n);

int main (void)
{
    // Print the first 25 Fibonacci numbers
    printf("The first %i numbers in the Fibonacci sequence are: \n", N);
    for(int i = 0; i < N; i++)
    {
        printf("%i  ", fibo(i));
    }
    printf("\n");

}

/**
 * Return the nth Fibonacci number
*/
int fibo(int n)
{
    // Base case #1
    if (n == 0)
        return 0;

    // Base case #2
    if (n == 1)
        return 1;

    // Recursive case
    return fibo(n - 1) + fibo(n - 2);
}
