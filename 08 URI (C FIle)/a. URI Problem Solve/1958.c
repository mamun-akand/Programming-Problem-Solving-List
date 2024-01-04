#include<stdio.h>

int main(){

    long double x;
    scanf("%Lf", &x);

    char ara[120];
    sprintf(ara, "%E", x);

    if(ara[0] != '-') printf("+");

    printf("%0.4E", x);

    return 0;

}
