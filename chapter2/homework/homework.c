/**
 * Helps a user decide which homework to do first
 *
 * Mr. Price - CS50 AP
 *
 * Name:
 * Date:
 *
 */
#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    // Prompt the user for the number of courses that they have homework in
    int n = get_int("How many courses do you have homework in? ");

    // TODO: Declare an array of courses with the correct number of elements

    // TODO: Prompt the user for their course names and store it in the array

    // Initialize random number generator
    // (found info on https://www.tutorialspoint.com/c_standard_library/c_function_rand.htm)
    time_t t;
    srand((unsigned) time(&t));

    // Find a random number
    int r = rand() % n;

    // TODO: Print out a random course number with index r

}