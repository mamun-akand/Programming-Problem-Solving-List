#include<stdio.h>
#include<stdlib.h>

int main(){

    int h, n, i;
    scanf("%d %d", &h, &n);
    int ara[n];

    for(i=0 ; i<n ; i++){
        scanf("%d", &ara[i]);
    }

    for(i=0 ; i<n-1 ; i++){
        int d = ara[i+1] - ara[i];
        int d2 = abs(d);

        if(d2>h){
            printf("GAME OVER\n");
            return 0;
        }
    }

    printf("YOU WIN\n");

    return 0;

}
