#include <stdio.h>

int main()
{
    double C, F;

    printf("Enter the value of Celcius: ");
    scanf("%lf", &C);

    F = C * 1.8 + 32;
    printf("Converted Farenhite value is : %0.2lf", F);

    return 0;
}
