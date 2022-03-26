#include<stdio.h>

int main(){

    int n;

    while(scanf("%d", &n) != EOF){
        int ara[n][n];
        int i, j, l;

        for(i=0, l=n-1 ; i<n ; i++, l--){
            for(j=0 ; j<n ; j++){
                if(n%2==1){
                    if(i == j && i != ((n-1)/2)) ara[i][j] = 1;
                    else if(l==j) ara[i][j] = 2;
                    else ara[i][j] = 3;
                    printf("%d", ara[i][j]);
                }
                else if(n%2==0) {
                    if(i == j) ara[i][j] = 1;
                    else if(l == j) ara[i][j] = 2;
                    else ara[i][j] = 3;
                    printf("%d", ara[i][j]);
                }
            }
            printf("\n");
        }

    }

    return 0;
}
