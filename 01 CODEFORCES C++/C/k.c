#include<stdio.h>

int main(){

    int a, b, c, min, max;
    scanf("%d %d %d", &a, &b, &c);

    if(a<b){
        if(a<c) min = a;
        else min = c;
    }
    else{
        if(b<c) min = b;
        else min = c;
    }

    if(a>b){
        if(a>c) max = a;
        else max = c;
    }
    else{
        if(b>c) max = b;
        else max = c;
    }

    printf("%d %d", min, max);

    return 0;

}
