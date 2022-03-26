#include<stdio.h>

int main(){

    long long int t;
    scanf("%lld", &t);

    while(t--){
        long long int n, i, min, max;
        scanf("%lld", &n);
        long long int ara[n];

        for(i=0 ; i<n ; i++){
            scanf("%lld", &ara[i]);
        }

        min = ara[0];
        max = ara[0];

        for(i=0 ; i<n ; i++){
            if(ara[i] < min) min = ara[i];
            if(ara[i] > max) max = ara[i];
        }

        printf("%lld\n", max-min);
    }

    return 0;
}
