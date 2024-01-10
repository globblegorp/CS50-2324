// DigitSum
#include <cs50.h>
#include <stdio.h>

int digitsum(int n);

int main(void)
{
    int n = get_int("Integer: ");
    printf("Sum of the digits: %d\n", digitsum(n));
}

int digitsum(int n)
{
    // Base case
    if (n < 10)
        return ???;
    // Recursive case
    else
        return ???;
}
