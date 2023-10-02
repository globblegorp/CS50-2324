// Raise a number to a power
#include <cs50.h>
#include <math.h>
#include <stdio.h>

int main(void)
{
    // Prompt the user for the base
    float base = get_float("Base: ");

    // Prompt the user for power
    float power = get_float("Power: ");

    // Some math to find the power
    double result = pow(base, power);

    // Print out the result
    printf("%0.2f raised to the %0.2f is %0.2f\n", base, power, result);
}