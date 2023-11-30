/**
 * Linear search for a phone number
*/

#include <cs50.h>
#include <stdio.h>
#include <strings.h>

typedef struct
{
    string name;
    string number;
}
person;

int main(void)
{
    // Create an array called people where each index is of type person
    person people[6];

    // Fill in the array
    people[0].name = "Julian";
    people[0].number = "888-8888";

    people[1].name = "Grace";
    people[1].number = "458-0000";

    people[2].name = "Liam";
    people[2].number = "123-4567";

    people[3].name = "Efrem";
    people[3].number = "000-0000";

    people[4].name = "Malia";
    people[4].number = "789-1234";

    people[5].name = "Kate";
    people[5].number = "413-4133";


    // Ask the user what to search for
    string name = get_string("Name: ");

    // Search for name
    for(int i = 0; i < 6; i++)
    {
        // If name found
        if(strcasecmp(name, people[i].name) == 0) // Note* capitalization is ignored
        {
            // Print the phone number at this index
            printf("Number: %s\n", people[i].number);
            return 0;
        }
    }

    // Not found
    printf("Not found.\n");
    return 1;
}
