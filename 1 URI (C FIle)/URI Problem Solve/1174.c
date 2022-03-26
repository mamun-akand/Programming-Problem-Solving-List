#include <stdio.h>

int main(){

    double A[100], x;
    int i;

    for(i=0 ; i<100 ; i++){

        scanf("%lf", &x);

        A[i] = x;

        if(x<=10){
            printf("A[%d] = %0.1lf\n", i, x);

        }
    }

    return 0;
}
