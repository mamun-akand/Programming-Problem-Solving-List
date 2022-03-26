#include <stdio.h>

int main()
{
    double v, t, s;

    printf("Enter the value of v: ");
    scanf("%lf", &v);

    printf("Enter the value of t: ");
    scanf("%lf", &t);

    s = 2*t*v;

    printf("Distance in 2t time : %0.2lf\n", s);

    return 0;
}
