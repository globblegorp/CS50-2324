// Get a positive integer
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Initialize a variable n
    int n;

    do
    {
        // Prompt the user for an integer and assign it to n
        n = get_int("Positive integer: ");
    }
    // Contiue to prompt the user while the number is not positive
    while(n <= 0);

    // Print the user's response
    printf("You chose the positive integer %i.\n", n);
}