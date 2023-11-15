/**
 * Prints the sum of integers in the command line
 *
 * TODO: Write code that takes in command line arguments as ints (the function atoi() might
 * come in handy), and prints out their sum.
 */
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, string argv[])
{
    // Input verification. If not proper input, print usage error and stop program
    if (argc < 3)
    {
        printf("Usage: ./sigma <list of integers>\n");
        return 1;
    }

    // Read each of the arguments as ints and save to a running sum
    int sum = 0;
    for (int i = 1; i < argc; i++)
    {
        sum = sum + atoi(argv[i]);
    }

    // Print the sum
    printf("The sum is %i\n", sum);


    // Success
    return 0;
}
