// Swap vairables
#include <stdio.h>

int main()
{
    int a = 5, b = 6;
    printf("Before swapping: %d and %d\n", a, b);
    a += b;
    b = a - b;
    a -= b;
    printf("After swapping : %d and %d\n", a, b);
    return 0;
}