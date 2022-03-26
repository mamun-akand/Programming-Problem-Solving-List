#include <stdio.h>

int main(){

    double N[100], x;
    int i;
    scanf("%lf", &x);

    for(i=0 ; i<100 ; i++){
        N[i] = x;
        printf("N[%d] = %0.4lf\n", i, x);
        x = x/2;
    }

    return 0;
}
