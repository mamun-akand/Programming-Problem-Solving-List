#include <stdio.h>

int main(){

    int s, i;
    scanf("%d", &s);

    double avg, a, b, c;

    for(i=0 ; i<s ; i++){
        scanf("%lf %lf %lf", &a, &b, &c);
        avg = (a*2 + b*3 + c*5)/10;
        printf("%.1lf\n", avg);
    }

    return 0;
}
