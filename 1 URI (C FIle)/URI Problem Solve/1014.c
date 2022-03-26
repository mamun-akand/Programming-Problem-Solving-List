#include <stdio.h>

int main(){
    int d;
    double f, avg;

    scanf("%d %lf", &d, &f);

    avg = d/f;

    printf("%.3lf km/l\n", avg);

    return 0;
}
