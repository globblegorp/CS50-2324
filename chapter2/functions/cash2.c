#include <cs50.h>
#include <math.h>
#include <stdio.h>

// Function prototypes
int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

int main(void)
{
    // Ask how many cents the customer is owed
    int cents = get_cents();

    // Calculate the number of quarters to give the customer
    int quarters = calculate_quarters(cents);
    cents = cents - quarters * 25;

    // Calculate the number of dimes to give the customer
    int dimes = calculate_dimes(cents);
    cents = cents - dimes * 10;

    // Calculate the number of nickels to give the customer
    int nickels = calculate_nickels(cents);
    cents = cents - nickels * 5;

    // Calculate the number of pennies to give the customer
    int pennies = calculate_pennies(cents);
    cents = cents - pennies * 1;

    // Sum coins
    int coins = quarters + dimes + nickels + pennies;

    // Print total number of coins to give the customer
    printf("%i\n", coins);
}

/**
 * Returns the cents for a dollar and cents input
*/
int get_cents(void)
{
    // Get a float for the money owed
    float dollars;
    do
    {
        dollars = get_float("Change owed: ");
    }
    while (dollars < 0);

    // Return an integer in cents
    return round(dollars * 100);
}

/**
 * Returns the number of quarters given the change
*/
int calculate_quarters(int cents)
{
    return cents / 25;
}

/**
 * Returns the number of dimes given the change
*/
int calculate_dimes(int cents)
{
    return cents / 10;
}

/**
 * Returns the number of nickles given the change
*/
int calculate_nickels(int cents)
{
    return cents / 5;
}

/**
 * Returns the number of pennies given the change
*/
int calculate_pennies(int cents)
{
    return cents;
}