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
    switch(answer)
    {
        case 'Y':
        case 'y':
            printf("You said Yes\n");
            break;

        case 'N':
        case 'n':
            printf("You said No\n");
            break;

        default:
            printf("Error - please provide an appropriate response\n");

    }
}