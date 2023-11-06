// The length of a person's first name

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get user's name
    string name = get_string("Full name: ");

    // Initialize a counter
    int counter = 0;

    // Increase the counter until we see the first space
    while(name[counter] != ' ')
    {
        counter++;
    }

    // Print the length
    printf("The length of first name: %i\n", counter);
}