#include <stdio.h>

int main()
{
    double a, b, sum;

    a=9.5;
    b=8.743;

    sum=a+b;

    printf("The sum is: %f\n", sum);
    printf("The sum is: %0.2lf\n", sum);
    printf("The sum is: %0.0lf\n", sum);


    return 0;
}
