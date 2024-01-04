#include <stdio.h>

int main(){

    unsigned long long int ara[61], a, b, c;
    int t, i, n;

    scanf("%d", &t);

    ara[0] = 0;
    ara[1] = 1;

    a = 0;
    b = 1;

    for(i=2 ; i<61; i++){
        c = a+b;
        ara[i] = c;
        a = b;
        b = c;
    }

    while(t){
        scanf("%d", &n);
        printf("Fib(%d) = %llu\n", n, ara[n]);
        t--;
    }

    return 0;
}
