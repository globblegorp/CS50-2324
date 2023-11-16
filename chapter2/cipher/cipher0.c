// De-cipher a message with 5 characters


#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    string message = "[tnqf&";

    // De-cipher the message
    printf("The hidden message is: ");

    // For each character in the message
    for (int i = 0; i < strlen(message); i++)
    {
        // Go back 5 ASCII characters
        printf("%c", message[i] - 5);
    }

    // New line
    printf("\n");

    // Return success
    return 0;
}
