#include <stdio.h>

int main(){

    int N[1000], i, j, t;
    scanf("%d", &t);

    for(i=0, j=0 ; i<1000 ; i++){

        N[i] = j;
        printf("N[%d] = %d\n", i, N[i]);

        if(j == t-1){
            j = -1;
        }
        j++;
    }

    return 0;
}
