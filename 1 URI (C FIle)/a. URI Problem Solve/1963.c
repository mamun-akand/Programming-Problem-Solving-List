#include<stdio.h>

int main(){

    double x, y, per;
    scanf("%lf %lf", &x, &y);

    per = ((y-x)/x)*100.00;

    printf("%0.2lf%%\n", per);

    return 0;

}
