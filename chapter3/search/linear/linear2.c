/**
 * Linear search for a phone number
*/

#include <cs50.h>
#include <stdio.h>
#include <strings.h>

int main(void)
{
    // Array of names
    string names[] = {"Julian", "Grace", "Liam", "Efrem", "Malia", "Kate"};

    // Array of phone numbers
    string numbers[] = {"888-8888", "458-0000", "123-4567", "000-0000", "789-1234", "413-4133"};

    // Ask the user what to search for
    string name = get_string("Name: ");

    // Search for name
    for(int i = 0; i < 6; i++)
    {
        // If name found
        if(strcasecmp(name, names[i]) == 0)
        {
            // Print the phone number at this index
            printf("Number: %s\n", numbers[i]);
            return 0;
        }
    }

    // Not found
    printf("Not found.\n");
    return 1;
}
