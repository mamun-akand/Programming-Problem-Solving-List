#include<stdio.h>

int main(){

    int n, m, a, length, width, flgstn;
    scanf("%d %d %d", &n, &m, &a);

    length = n/a;
    width = m/a;

    flgstn = length*width;
    printf("%d\n", flgstn);

    return 0;
}
