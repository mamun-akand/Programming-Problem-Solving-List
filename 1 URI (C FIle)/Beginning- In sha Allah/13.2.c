#include<stdio.h>

int main(){

    int i, j, k, n=11;

    for(i=1 ; i <= 6 ; i++){

        if(i==1){
            for(j=1 ; j<=n ; j++){
                printf("c");
            }
            n-=2;
        }

        if(i>1){

            for(k=1 ; k <= i-1 ; k++){
                printf(" ");
            }

            for(j=1 ; j<=n ; j++){
                printf("c");
            }
            n-=2;

            for(k=1 ; k <= i-1 ; k++){
                printf(" ");
            }

        }

        printf("\n");
    }

    n=3;

    for(i=6 ; i >= 2 ; i--){

            for(k=1 ; k <= i-2 ; k++){
                printf(" ");
            }

            for(j=1 ; j<=n ; j++){
                printf("c");
            }
            n+=2;

            for(k=1 ; k <= i-2 ; k++){
                printf(" ");
            }


        printf("\n");
    }

    return 0;
}
