#include<stdio.h>

int main(){

    long long int x, y;
    long long int mul;
    scanf("%lld %lld", &x, &y);

    mul=x*y;

    printf("%lld + %lld = %lld\n", x, y, x+y);
    printf("%lld * %lld = %lld\n", x, y, mul);
    printf("%lld - %lld = %lld\n", x, y, x-y);

    return 0;

}
