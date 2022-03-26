#include<stdio.h>

int main(){

    int n;

    while(scanf("%d", &n)!=EOF) {

        int ara[n][n], i, j;

        for(i=0; i<n ; i++){
            for(j=0 ; j<n ; j++){
                ara[i][j] = 0;
            }
        }

        for(i=0, j=0 ; i<n ; i++, j++){
            ara[i][j] = 2;
            ara[i][(n-1)-i] = 3;
        }

        int for1 = n/3;

        for(i=for1 ; i < n-for1 ; i++){
            for(j=for1 ; j < n-for1 ; j++){
                ara[i][j] = 1;
            }
        }

        int center = n/2;
        ara[center][center] = 4;

        //printing
        for(i=0; i<n ; i++){
            for(j=0 ; j<n ; j++){
                printf("%d", ara[i][j]);
            }
            printf("\n");
        }
        printf("\n");

    }

    return 0;

}
