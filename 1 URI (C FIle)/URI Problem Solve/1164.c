#include <stdio.h>

int main(){

    int n, x, i, sum;
    scanf("%d", &n);

    while(n){
        scanf("%d", &x);
        sum = 0;

        for(i=1 ; i<x ; i++){
            if(x%i==0){
                sum = sum+i;
            }
        }

        if(sum == x){
            printf("%d eh perfeito\n", x);
        }
        else{
            printf("%d nao eh perfeito\n", x);
        }
        n--;
    }

    return 0;
}
