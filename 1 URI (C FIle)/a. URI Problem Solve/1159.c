#include <stdio.h>

int main(){

    int x, i, sum, count;

    while(1){

        scanf("%d", &x);
        sum = 0;

        if(x == 0){
            break;
        }

        else if(x%2 == 0){
            for(i=x, count=1 ; count <= 5 ; i=i+2){
                sum = sum + i;
                count++;
            }
        }

        else if(x%2 != 0){
            for(i=(x+1), count=1 ; count <= 5 ; i=i+2){
                sum = sum + i;
                count++;
            }
        }


        printf("%d\n", sum);
    }

    return 0;
}
