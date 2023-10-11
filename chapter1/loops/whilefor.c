#include <cs50.h>
#include <stdio.h>

int main(void)
{
    /**
    // Use a while loop to say "hello, world" 5 times
    int counter = 0;
    while (counter < 5)
    {
        // Print hello, world
        printf("hello, world\n");

        // Increase the counter by 1
        // counter = counter + 1;
        // counter += 1;
        counter++;
    }
    */


   // It's a bit better to use a for loop to complete this
   // because there is a set number of repeats (in this case 5)
   for (int counter = 0; counter < 5; counter++)
   {
        // Print hello, world
        printf("hello, world\n");
   }
}