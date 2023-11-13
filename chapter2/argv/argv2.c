/**
 * Say hello to a user if they provide their first and last name in the
 * command line.
*/

#include <cs50.h>
#include <stdio.h>

int main(int argc, string argv[])
{
    if (argc == 3)
    {
        printf("hello, %s %s\n", argv[1], argv[2]);
    }
    else if (argc == 2)
    {
        printf("hello, %s\n", argv[1]);
    }
    else
    {
        printf("hello, world\n");
    }

}
