#include <stdio.h>

int main(){

    int n, x, i, indicator;
    scanf("%d", &n);

    while(n){

        scanf("%d", &x);

        indicator = 0;

        for(i=2 ; i<x ; i++){
            if(x%i==0){
                indicator = 1;
                break;
            }
        }

        if(x == 0 || x == 1){
            printf("%d nao eh primo\n", x);
        }
        else if(indicator==0){
            printf("%d eh primo\n", x);
        }
        else if(indicator == 1){
            printf("%d nao eh primo\n", x);
        }

        n--;

    }

    return 0;
}
