#include<stdio.h>

int main(){

    int a, x, y, i, j, sum=0;
    scanf("%d", &a);

    for(j=0 ; j<a ; j++){
        scanf("%d %d", &x, &y);
        if(x<y){
            for(i=(x+1) ; i<y ; i++){
                if(i%2 != 0){
                    sum = sum + i;
                }
            }
            printf("%d\n", sum);
            sum = 0;
        }

        else{
            for(i=(y+1) ; i<x ; i++){
                if(i%2 != 0){
                    sum = sum + i;
                }
            }
            printf("%d\n", sum);
            sum = 0;
        }
    }
    return 0;
}
