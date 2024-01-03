// Bubble Sort
#include <cs50.h>
#include <stdio.h>

int main (void)
{
    // Get positive array size from user
    int n;
    do
    {
        n = get_int("Please enter array size: ");
    }
    while (n < 1);

    // Populate array with integers from user
    int array[n];
    printf("Please enter %i elements to fill array: \n", n);
    for (int i = 0; i < n; i++)
    {
        array[i] = get_int("");
    }

    // Display unsorted array
    printf("unsorted array is: \n");
    for(int i = 0; i < n; i++)
    {
        printf("%i ", array[i]);
    }
    printf("\n");

    // Bubble Sort
    // Set swap counter to a non-zero value
    int swap_counter = -1;

    // Repeat until the swap counter is 0
    while (swap_counter != 0)
    {
        // Reset swap counter to 0
        swap_counter = 0;

        // Look at each adjacent pair
        for (int i = 0; i < n - 1; i++)
        {
            // If two adjacent elements are not in order
            if (array[i] > array[i + 1])
            {
                // Swap them
                int temp = array[i];
                array[i] = array[i + 1];
                array[i + 1] = temp;

                // Add one to the swap counter
                swap_counter++;
            }
        }
    }



    // Display sorted array
    printf("sorted array is: \n");
    for(int i = 0; i < n; i++)
    {
        printf("%i ", array[i]);
    }
    printf("\n");

    return 0;
}
