#include<stdio.h>

int main(){

    double v, d;

    while(scanf("%lf", &v) != -1){

        scanf("%lf", &d);

        double area = 3.14 * d/2.0 * d/2.0;
        double height = v/area;

        printf("ALTURA = %0.2lf\n", height);
        printf("AREA = %0.2lf\n", area);

    }

    return 0;

}
