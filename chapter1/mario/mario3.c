#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Prompt user for the height
    int height;
    do
    {
        height = get_int("Height: ");
    }
    while (height <= 0);

    // For the height
    for (int i = 0; i < height; i++)
    {
        // Print the block
        printf("#\n");
    }

}