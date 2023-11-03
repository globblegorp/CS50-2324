/**
 * Print each character of a string vertically as an upper case letter
*/

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // Get a string from the user
    string s = get_string("Input: ");

    // Loop through the string (strlen() returns the string length)
    for (int i = 0; i < strlen(s); i++)
    {
        // Print each char as an upper case
        printf("%c\n", toupper(s[i]));
    }

}