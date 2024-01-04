#include <stdio.h>

int main(){

    int ara[10], x, i;

    for(i=0 ; i<10 ; i++){
        scanf("%d", &x);

        ara[i] = x;

        if(ara[i] <= 0){
            ara[i] = 1;
            printf("X[%d] = %d\n", i, ara[i]);
        }
        else{
            printf("X[%d] = %d\n", i, ara[i]);        }
    }

    return 0;
}
