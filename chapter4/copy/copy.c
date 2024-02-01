#include <stdio.h>
#include <cs50.h>

int main(int argc, char* argv[])
{
    // Ensure proper usage
    if (argc != 3)
    {
        printf("Usage: ./copy <source file> <destination file>\n");
        return 1;
    }

    // Open up the source file
    FILE *source = ???;
    // If cannot open
    if (???)
    {
        printf("Cannot open a source file called %s\n", argv[1]);
        return 2;
    }

    // Now open up the destination file
    FILE *dest = ???;
    // If cannot open
    if (???)
    {
        // Make sure to close the source file that's already open before exiting!
        ???

        printf("Cannot open file called %s for writing\n", argv[2]);
        return 3;
    }

    // Read the contents of the source file one char (int!) at a time
    // Remember to use int so that the c != EOF comparison is reliable
    for (???)
    {
        // Write the character to the destination file!
        // Hint* you will need to find a function that will print/put a character in the destination file. 
        ???
    }

    // You leak memory if you forget to close your files that you opened!
    ???
}
