/**
 * Linear search for an element in an array
*/

#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
    // An array of numbers
    string names[] = {"Tyler", "Mia", "Tommy", "Jameson", "Jacylnn"};

    // Search for Jameson
    for(int i = 0; i < 5; i++)
    {
        if(strcmp(names[i], "Declan") == 0)
        {
            printf("Found at index %i\n.", i);
            return 0;
        }
    }

    printf("Not found.\n");
    return 1;
}
