/**
 * Average three number (provided) using an array
*/

#include <stdio.h>

int main(void)
{
    // Scores
    int scores[3];
    scores[0] = 63;
    scores[1] = 42;
    scores[2] = 98;

    // Print average
    printf("Average: %0.1f%%\n", (scores[0] + scores[1] + scores[2]) / 3.0);
}