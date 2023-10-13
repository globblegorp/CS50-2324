/**
 * Determine the least number of coins needed to make change
*/
#include <math.h>
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Get the change owed from the user
    float dollars = get_float("Change owed: ");

    // Convert the dollars and cents to just cents
    int cents = round(dollars * 100);

    // Determine the number of quarters needed
    int coins = cents / 25;

    // The remaining cents after removing quarters
    cents %= 25;

    // Determine the number of dimes needed
    coins += cents / 10;

    // The remaining cents after removing dimes
    cents %= 10;

    // Determine the number of nickles needed
    coins += cents / 5;

    // The remaining cents after removing nickles
    cents %= 5;

    // Determine the number of pennies needed
    coins += cents;

    // Print the result
    printf("%i\n", coins);
}