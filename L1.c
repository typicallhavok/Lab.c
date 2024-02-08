// Program to find area of circle
#include <stdio.h>
#include <math.h>

int main()
{
    double r;
    printf("Enter radius: ");
    scanf("%lf", &r);
    double a = r * r * M_PI;
    printf("area: %lf\n", a);
    return 0;
}