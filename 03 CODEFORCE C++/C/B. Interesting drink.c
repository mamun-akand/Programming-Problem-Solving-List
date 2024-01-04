#include<stdio.h>

long long int n, days;
long long int shop[100999], coins[100999], able[100999];

int main(){

    scanf("%lld", &n);
    long long int i, j;

    for(i=0 ; i<n ; i++){
        scanf("%lld", &shop[i]);
        able[i] = 0;
    }

    scanf("%lld", &days);

    for(i=0 ; i<days ; i++){
        scanf("%lld", &coins[i]);
        for(j=0 ; j<n ; j++){
            if(shop[j] <= coins[i]) able[i]++;
        }
        printf("%lld\n", able[i]);
    }

    return 0;
}
