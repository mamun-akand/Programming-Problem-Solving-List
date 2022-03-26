#include <stdio.h>

int main(){

    double ara[2], n;
    int i=0;

    while(1){
        scanf("%lf", &n);

        if(n < 0 || n > 10){
            printf("nota invalida\n");
        }

        else{
            ara[i] = n;
            i++;
            if(i > 1){
                break;
            }
        }
    }

    printf("media = %.2lf\n", (ara[0]+ara[1])/2.0);

    return 0;
}
