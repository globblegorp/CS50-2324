/**
 * Say hello to a user with their initials
*/

#include <cs50.h>
#include <ctype.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc == 2)
    {
        printf("hello, %c\n", toupper(argv[1][0]));
    }
    else
    {
        printf("hello, world\n");
    }
}
