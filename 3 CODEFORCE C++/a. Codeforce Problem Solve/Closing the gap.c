#include<stdio.h>

int main(){

    int tst, t;
    scanf("%d", &tst);

    for(t=1 ; t<=tst ; t++){

        int n, i;
        scanf("%d", &n);

        long long int ara[n], sum=0, rem;

        for(i=0 ; i<n ; i++){
            scanf("%lld", &ara[i]);
            sum = sum + ara[i];
        }

        rem = sum%n;

        if(rem == 0) printf("0\n");
        else if(rem != 0) printf("1\n");

    }

    return 0;

}
