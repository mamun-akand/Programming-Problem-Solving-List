#include <stdio.h>

int main(){
    int x, r, i;
    scanf("%d", &x);

    r = x%2;

    if(r == 0){
        for( i = x+1 ; i <= x+11 ; i = i+2 ){
            printf("%d\n", i);
        }
    }
    else{
        for( i = x ; i <= x+11 ; i = i+2 ){
        printf("%d\n", i);
        }
    }

    return 0;
}
