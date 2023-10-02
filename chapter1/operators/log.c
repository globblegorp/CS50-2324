#include <math.h>
#include <stdio.h>

int main(void)
{
    // Print out the float with no decimal using 0.0 so
    // that it looks like an int
    printf("This is CS%0.0f.\n", log2(1125899906842624));

    // Type cast the log to an int before subsituting into
    // the placeholder
    printf("This is CS%i.\n", (int) log2(1125899906842624));
}