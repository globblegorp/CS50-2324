/**
 * Non-recursive implemenation that lists the first 25 Fibonacci numbers
 */
#include <cs50.h>
#include <stdio.h>

#define N 25

int main(void)
{
    // Declare the array, and store the first two values
    int fibo[N];
    fibo[0] = 0;
    fibo[1] = 1;

    // Calculate and store the next 23 values
    for (int i = 2; i < N; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }

    // Print the entire series
    printf("The first %d numbers in the Fibonacci series are: \n", N);
    for (int i = 0; i < N; i++)
    {
        printf("%i ", fibo[i]);
    }
    printf("\n");
}
