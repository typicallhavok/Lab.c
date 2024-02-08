// Swap vairables
#include <stdio.h>

int main()
{
    int a = 5, b = 6;
    printf("Before swapping: %d and %d\n", a, b);
    b += a;
    a -= 2 * a;
    a += b;
    b -= a;
    printf("After swapping : %d and %d\n", a, b);
    return 0;
}