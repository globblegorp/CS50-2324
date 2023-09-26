/**
 * This program will create variables, assign values, and
 * print them out.
 *
 * Brandon Price
 * CS50 AP
 * Mount Greylock
*/
#include <stdio.h>

int main(void)
{
    // Initialize the value x and the value of y
    int x = 7;
    int y = x - 1;

    // Update the values of x and y
    y = y + 1;
    x = x + 6;

    // Print out the current value of x and y
    printf("The value of x is %i and the value of y is %i\n", x, y);
}