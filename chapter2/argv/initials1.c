/**
 * Say hello to a user with their initials
*/

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc > 1)
    {
        printf("hello, ");

        // For each name provided by the user
        for (int i = 1; i < argc; i++)
        {
            printf("%c.", toupper(argv[i][0]));
        }

        printf("\n");
    }
    else
    {
        printf("hello, world\n");
    }

}
