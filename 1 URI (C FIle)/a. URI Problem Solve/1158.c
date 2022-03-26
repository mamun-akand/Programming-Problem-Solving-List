#include <stdio.h>

int main(){

    int n, x, y, i, sum, count;
    scanf("%d", &n);

    while(n){

        scanf("%d %d", &x, &y);
        sum = 0;

        if(x%2 != 0){
            for(i=x, count=1 ; count <= y ; i=i+2){
                sum = sum + i;
                count++;
            }
        }
        else{
            for(i=(x+1), count=1 ; count <= y ; i=i+2){
                sum = sum + i;
                count++;
            }
        }
        n--;
        printf("%d\n", sum);
    }


    return 0;
}
