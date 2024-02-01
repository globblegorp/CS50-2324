// Open a txt file and print to the screen

#include <stdio.h>

int main(void)
{
    // Open .txt file
    FILE *text = fopen("cs50.txt", "r");

    // Check if opened successfully
    if (!text)
    {
        printf("Error - file did not open\n");
        return 1;
    }

    // Print every character
    // Note* saving the char as an int for a reliable EOF comparison
    for (int ch = fgetc(text); ch != EOF; ch = fgetc(text))
    {
        printf("%c", ch);
    }

    printf("\n");

    // Close the file
    fclose(text);
}
