/**
 * Use a data structure to hold student names and GPAs. Save information
 * to a csv file.
*/

#include <cs50.h>
#include <stdio.h>

typedef struct
{
    string name;
    float gpa;
}
student;

int main(void)
{
    // Get the number of students from the user
    int enrollment = get_int("Enrollment: ");
    printf("\n");

    // Allocate space for the students
    student school[enrollment];

    // Fill in the array
    for(int i = 0; i < enrollment; i++)
    {
        printf("Student #%i:\n", i + 1);
        school[i].name = get_string("\tName: ");
        school[i].gpa = get_float("\tGPA: ");
        printf("\n");
    }

    //Save to disk
    FILE *file = fopen("gpa.csv", "a");

    if (file)
    {
        for (int i = 0; i < enrollment; i++)
        {
            fprintf(file, "%s, %f\n", school[i].name, school[i].gpa);
        }
    }

    fclose(file);
}
