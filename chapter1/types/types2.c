#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get the user's favorite number
    float number = get_float("What is your favorite number? ");

    // Get another number from the user
    float another_number = get_float("What is your second favorite number? ");

    // Confirms the user's choice
    printf("You chose the number %0.2f and the number %f.\n", number, another_number);
}