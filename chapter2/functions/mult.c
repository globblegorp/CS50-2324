// Tests a function that multiplies two floats
#include <cs50.h>
#include <stdio.h>

// Function prototype
float product(float x, float y);

int main(void)
{
    // Get a number from the user
    float first = get_float("Number: ");

    // Get another number from the user
    float second = get_float("Another Number: ");

    // Multiply
    float mult = product(first, second);

    // Print the result
    printf("The product of %.2f and %.2f is %.2f.\n", first, second, mult);
}

// Function definition
float product(float x, float y)
{
    return x * y;
}