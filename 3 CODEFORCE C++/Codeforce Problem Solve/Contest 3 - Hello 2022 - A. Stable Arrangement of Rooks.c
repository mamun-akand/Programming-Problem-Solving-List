#include<stdio.h>

int main(){

    int t;
    scanf("%d", &t);

    while(t--){

        int n, k, rook = 0;
        scanf("%d %d", &n , &k);

        char ara[n][n];
        int i, j;

        if( n%2==0 && k > (n/2)) printf("%d\n", -1);

        else if( n%2==1 && k > ((n+1)/2)) printf("%d\n", -1);

        else {

            for(i=0 ; i<n ; i++){
                for(j=0 ; j<n ; j++){
                    ara[i][j]= '.' ;
                }
            }

            for(i=0, j=(n-1) ; j >= 0 ; i+=2, j = j-2){
                rook++;
                if(rook <= k) ara[i][j] = 'R';
                else break;
            }

            for(i=0 ; i<n ; i++){
                for(j=0 ; j<n ; j++){
                    printf("%c", ara[i][j]);
                }
                printf("\n");
            }
        }

    }

    return 0;

}
