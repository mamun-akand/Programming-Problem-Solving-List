#include <stdio.h>

double find_average(double ara[], double n);

int main()
{
    double ara[] = {10, 10.9, 13};
    int n = 3;
    double average;

    average = find_average(ara, n);
    printf("%0.2lf", average);
}

double find_average(double ara[], double n)
{
    double sum = 0, average;
    int i;

    for(i=0 ; i<n ; i++) {
        sum = sum + ara[i];
    }

    average = sum / n;

    return average;
}
