/**
 * Print each character of a string in reverse!
*/

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Get a string
    string word = get_string("Input: ");

    // Start the output
    printf("Reverse: ");

    // Loop through each char in word
    for (int i = strlen(word) - 1; i >= 0; i--)
    {
        printf("%c", word[i]);
    }

    printf("\n");
}