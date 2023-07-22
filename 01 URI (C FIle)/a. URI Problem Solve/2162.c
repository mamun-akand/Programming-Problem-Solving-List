#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    int ara[n], i, cond=1;

    for(i=0 ; i<n ; i++){
        scanf("%d", &ara[i]);
    }

    if(n==2 && ara[0]==ara[1]) cond = 0;
    else{
        for(i=2 ; i<n ; i++){
            if(ara[i] >= ara[i-1] && ara[i-1] >= ara[i-2]){
                cond = 0;
                break;
            }
            else if(ara[i] <= ara[i-1] && ara[i-1] <= ara[i-2]){
                cond = 0;
                break;
            }
        }
    }

    printf( (cond==1) ? "1\n" : "0\n" );

    return 0;

}
