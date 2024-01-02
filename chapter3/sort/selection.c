// Selection Sort
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

    // TODO: Selection Sort
    // For i from 0 to n-1
    for (int first_unsorted_index = 0; first_unsorted_index < n; first_unsorted_index++)
    {
        // Find the smallest element between i'th and n-1'th
        int smallest = array[first_unsorted_index];
        int smallest_index = first_unsorted_index;
        for (int i = first_unsorted_index + 1; i < n; i++)
        {
            if (array[i] < smallest)
            {
                smallest = array[i];
                smallest_index = i;
            }
        }
        // Swap smallest with i'th element if first unsorted index isn't the smallest
        array[smallest_index] = array[first_unsorted_index];
        array[first_unsorted_index] = smallest;
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
