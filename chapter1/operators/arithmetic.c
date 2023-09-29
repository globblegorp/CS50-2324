// Test out some integer arithmetic
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt the user for an integer and save it
    int number1 = get_int("Integer, please: ");

    // Prompt the user for another integer and save it
    int number2 = get_int("Another integer, please: ");

    // Addition with an extra variable
    // int sum = number1 + number2;

    // Print out the result of different arithmetic
    printf("%i plus %i is %i.\n", number1, number2, number1 + number2);
    printf("%i minus %i is %i.\n", number1, number2, number1 - number2);
    printf("%i times %i is %i.\n", number1, number2, number1 * number2);

    // Note* an integer divided by and integer is always an integer
    // Floor division
    printf("%i divided by %i is %i.\n", number1, number2, number1 / number2);

    printf("The remainder when %i divided by %i is %i.\n", number1, number2, number1 % number2);
}