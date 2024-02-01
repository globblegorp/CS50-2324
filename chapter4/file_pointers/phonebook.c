// Save names and numbers to a CSV file

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Open a .csv file
    FILE *fonebook = fopen("phonebook.csv", "a");

    // Check to see if file opened successfully
    if (!fonebook)
    {
        printf("Error loading file\n");
        return 1;
    }

    // Get name and number
    char *name = get_string("Name: ");
    char *number = get_string("Number: ");

    // Write to the file
    fprintf(fonebook, "%s,%s\n", name, number);

    // Close the file
    fclose(fonebook);
}
