/**
 * Count the number of letters in the user's first name
*/

#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    // Check to see if the requirements have been met
    // Essentially ensuring "./exit1 <first name>"
    if (argc != 2)
    {
        // Print a usage error
        printf("Usage: ./exit1 <first name>\n");

        // Return an int for main, program stops running
        return 1;
    }

    // Tally the number of characters in first name
    int tally = 0;
    while (argv[1][tally] != '\0')
    {
        tally++;
    }

    // Print the name length
    printf("Your first name has %i characters.\n", tally);

    // Return a success
    return 0;
}
