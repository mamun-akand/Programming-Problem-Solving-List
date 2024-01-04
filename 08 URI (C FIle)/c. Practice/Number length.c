#include<stdio.h>

int main(){

    int a;
    scanf("%d", &a);

    int length;

    char ara[100];
    length = sprintf(ara, "%d", a);

    printf("string is %s and length is %d\n", ara, length);

    return 0;

}
