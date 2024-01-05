// Merge Sort
#include <cs50.h>
#include <stdio.h>

void merge(int a[], int start, int mid, int mid_1, int end);
void merge_sort(int a[], int start, int end);

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

    // Merge Sort
    merge_sort(array, 0, n-1);

    // Display sorted array
    printf("sorted array is: \n");
    for(int i = 0; i < n; i++)
    {
        printf("%i ", array[i]);
    }
    printf("\n");

    return 0;
}

// Incomplete implementation of merge sort
void merge_sort(int a[], int start, int end)
{
    if (end > start)
    {
        // Find the middle of the array
        int middle = (start + end) / 2;

        // Sort the left side
        merge_sort(a, start, middle);

        // Sort the right side
        merge_sort(a, middle + 1, end);

        // Merge the two halfs together
        merge(a, start, middle, middle + 1, end);
    }
}

void merge(int a[], int start, int mid, int mid_1, int end)
{
    // Declare temp array
    int b[end - start + 1];

    // Iterate through both halves, placing whichever is the higher value into temp array
    int i = 0, j = 0;
    while (start + i <= mid && mid_1 + j <= end)
    {
        if (a[start + i] < a[mid_1 + j])
        {
            b[i + j] = a[start + i];
            i++;
        }
        else
        {
            b[i + j] = a[mid_1 + j];
            j++;
        }
    }

    // Copy elements from either half that remain, after direct comparison
    while (start + i <= mid)
    {
        b[i + j] = a[start + i];
        i++;
    }
    while (mid_1 + j <= end)
    {
        b[i + j] = a[mid_1 + j];
        j++;
    }

    // Copy temp array into final array
    for (int k = 0; k < i + j; k++)
    {
        a[start + k] = b[k];
    }
}
