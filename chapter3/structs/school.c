/**
 * Use a data structure to hold student names and GPAs. Print out
 * the information.
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

    // Print out all student names and gpas
    for (int i = 0; i < enrollment; i++)
    {
        printf("%s has a gpa of %0.3f\n", school[i].name, school[i].gpa);
    }
}
