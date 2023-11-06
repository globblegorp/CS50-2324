// Prints the user's initials

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Get the user's full name
    string name = get_string("Full name: ");

    // Print the first initial
    printf("Initials: %c", toupper(name[0]));

    // For each character after the first letter
    for (int i = 1; i < strlen(name); i++)
    {
        // If a space
        if (name[i] == ' ' || name[i] == '-')
        {
            // Print the next character
            printf("%c", toupper(name[i + 1]));
        }
    }

    // Move cursor to new line
    printf("\n");
}