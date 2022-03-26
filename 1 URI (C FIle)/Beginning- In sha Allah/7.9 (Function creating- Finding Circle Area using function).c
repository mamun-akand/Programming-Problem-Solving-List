#include <stdio.h>

double circle_area(double r)
{
    double pi = 3.1416;
    double area;

    area = pi*r*r;
    return area;
}

int main()
{
    double r = 1.5;
    double find_area;

    find_area = circle_area(r);
    printf("Circle area is %0.3lf\n", find_area);

    return 0;
}
