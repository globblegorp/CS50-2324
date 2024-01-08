// Find a needle in a sorted haystack
#include <cs50.h>
#include <stdio.h>

bool binary_search(int needle, int haystack[], int size);

int main(void)
{
    // Initialize a haystack
    int haystack[8] = {4, 8, 15, 16, 23, 42, 50, 108};

    // Get the needle for user
    int n = get_int("Needle: ");

    // Search haystack for needle and print result
    if (binary_search(n, haystack, 8))
    {
        printf("Needle is in the haystack.\n");
    }
    else
    {
        printf("Needle is not in the haystack.\n");
    }

}

// Binary search function
bool binary_search(int needle, int haystack[], int size)
{
    // Initialize start, middle, and end
    int start = 0;
    int end = size - 1;
    int middle;

    // While still a valid search
    while (start <= end)
    {
        // Calculate the middle
        middle = (start + end) / 2;

        // If the target is at the middle, stop
        if (haystack[middle] == needle)
        {
            return true;
        }

        // Otherwise, if the target is less, change end to left of middle
        else if (needle < haystack[middle])
        {
            end = middle - 1;
        }

        // Otherwise, the target is greater, change the start to right of middle
        else
        {
            start = middle + 1;
        }
    }

    // If start !<= end, target not found
    return false;

}
