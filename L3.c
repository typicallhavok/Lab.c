// Simple interest
#include <stdio.h>
int main()
{
    double p, r, t;
    printf("Enter the principal amount: ");
    scanf("%lf", &p);
    printf("Enter the rate of interest per year: ");
    scanf("%lf", &r);
    printf("Enter the time period in years: ");
    scanf("%lf", &t);
    printf("The simple interest is : %.02lf\n", (p * r * t) / 100);
    return 0;
}