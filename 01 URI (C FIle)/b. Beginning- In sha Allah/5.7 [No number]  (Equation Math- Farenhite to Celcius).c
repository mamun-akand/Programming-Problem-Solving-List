#include <stdio.h>

int main()
{
    double C, F;

    printf("Enter the value of Celcius: ");
    scanf("%lf", &F);

    C = (F - 32) / 1.8;
    printf("Converted Farenhite value is : %0.2lf", C);

    return 0;
}
