/**
 * Get an answer from the user
*/

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt the user for a character answer
    char answer = get_char("Answer (Y/N): ");

    // Confirm the user's input
    if (answer == 'Y' || answer == 'y')
    {
        printf("You said Yes\n");
    }
    else if (answer == 'N' || answer == 'n')
    {
        printf("You said No\n");
    }
    else
    {
        printf("Error - please provide an appropriate response\n");
    }
}