#include<stdio.h>

int main(){
    int a=5, b, c=10, d;

    b = a++;
    d = ++c;

    printf("%d\n", b);
    printf("%d\n", d);

    return 0;
}
