#include<stdio.h>

int main(){

    int t, inp, i, count  =0;
    scanf("%d", &t);

    for(i=0 ; i<5 ; i++){
        scanf("%d", &inp);
        if(inp == t) count++;
    }

    printf("%d\n", count);

    return 0;

}
