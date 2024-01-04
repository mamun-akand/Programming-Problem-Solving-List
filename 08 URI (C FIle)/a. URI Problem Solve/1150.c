#include<stdio.h>

int main(){

    int x, z, i, sum = 0;

    scanf("%d", &x);

    while(1){

        scanf("%d", &z);
        if(z > x) break;

    }

    for(i=1 ; ; i++, x++){

        sum = sum + x;
        if(sum >= z) break;

    }

    printf("%d\n", i);

    return 0;
}
