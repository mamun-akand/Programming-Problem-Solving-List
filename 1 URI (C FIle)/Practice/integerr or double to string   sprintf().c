#include<stdio.h>

int main(){

    long double a=100000000000000, b=10, c;

    c = a + b;

    char ara[100];
    sprintf(ara, "%LG + %LG = %LG", a, b, c);

    printf("%s", ara);

    return 0;

}
