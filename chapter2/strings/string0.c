/**
 * Print each character of a string vertically
*/

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get a string from the user
    string s = get_string("Input: ");

    // Determine the length of the string
    int length = 0;
    while(s[length] != '\0')
    {
        length++;
    }

    // Loop through the string
    for (int i = 0; i < length + 1; i++)
    {
        // Print each character with a new line to make it vertical
        printf("%c\n", s[i]);
    }

}