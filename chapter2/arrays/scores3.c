/**
 * Average three number using an array
*/

#include <cs50.h>
#include <stdio.h>

// Function prototype
float array_average(int length, int array[]);

int main(void)
{
    // Let the user decide how many scores to enter
    int n = get_int("How many scores do you want to enter? ");

    // Scores
    int scores[n];
    for (int i = 0; i < n; i++)
    {
        scores[i] = get_int("Score: ");
    }

    // Print average
    printf("Average: %0.1f%%\n", array_average(n, scores));
}

float array_average(int length, int array[])
{
    // Calulate the sum of each element
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        // Open up each "locker" and add the value to the sum
        sum += array[i];
    }

    // Find the average
    return sum / (float) length;
}