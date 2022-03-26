#include <stdio.h>
#include <stdlib.h>

int main(){

    int n1, n2, n3, greater, greatest;
    scanf("%d %d %d", &n1, &n2, &n3);

    greater = (n1+n2+abs(n1-n2))/2;
    greatest = (greater+n3+abs(greater-n3))/2;

    printf("%d eh o maior\n", greatest);

    return 0;
}
