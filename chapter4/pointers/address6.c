// Print a string

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    string s = "Hi!";
    printf("%p\n", &s);
    printf("%p\n", &s[0]);
    printf("%p\n", &s[1]);
    printf("%p\n", &s[2]);
    printf("%p\n", &s[3]);
    printf("%p\n", &s[4]);
    printf("%p\n", &s[5]);
}
