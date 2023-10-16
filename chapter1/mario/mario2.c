#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for the number of ?
    int q;
    do
    {
        q = get_int("Number: ");
    }
    while (q <= 0);

    // For each question mark
    for (int i = 0; i < q; i++)
    {
        printf("?");
    }

    // Print a new line
    printf("\n");
}