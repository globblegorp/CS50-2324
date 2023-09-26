#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Gets the users name
    string answer = get_string("What's your name? ");

    // Says hello to the user
    printf("hello, %s\n", answer);
}