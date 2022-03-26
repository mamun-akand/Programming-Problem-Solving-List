#include<stdio.h>

int main(){

    long long int n;
    scanf("%lld", &n);

    int i;
    long long int div = n, rem;

    for(i=0 ; i<10 ;i++){
        rem = div%10;
        div = div/10;
        printf("%lld", rem);
        if(div==0) break;
    }

    printf("\n");

    return 0;

}
