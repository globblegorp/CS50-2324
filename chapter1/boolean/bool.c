/**
 * Test equality of numbers
*/

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt the user for an integer
    int first = get_int("Integer: ");

    // Prompt the user another intger;
    int second = get_int("Another integer: ");

    // Compare the numbers
    if (first < second)
    {
        printf("%i is less than %i.\n", first, second);
    }
    else if (first > second)
    {
        printf("%i is greater than %i.\n", first, second);
    }
    else
    {
        printf("%i is equal to %i.\n", first, second);
    }

}