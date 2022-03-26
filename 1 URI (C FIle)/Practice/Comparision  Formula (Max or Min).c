#include<stdio.h>

int main(){

    int a, b, max;
    scanf("%d %d", &a, &b);

    max = (a > b) ? a : b ;   /* New way to find bigger number, condition manle 'num1' or else 'num2' */

    printf("%d", max);

    return 0;

}
