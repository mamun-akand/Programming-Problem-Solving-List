#include <stdio.h>

int main(){

    int ara[10], v, i;
    scanf("%d", &v);

    for(i=0 ; i<10 ; i++){
        ara[i] = v;
        printf("N[%d] = %d\n", i, v);
        v = v*2;
    }
    return 0;
}
