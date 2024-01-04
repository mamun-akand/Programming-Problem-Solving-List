#include<stdio.h>

int main(){

    int n;

    while(1){

        int i, j, k;
        scanf("%d", &n);

        if(n==0) break;
        int ara[n][n];

        int value = 1;

        int s=0, end=n;
        for(k=0 ; k<n ; k++){
            for(i=0, j=s ; i<end ; i++, j++){
                ara[i][j] = value;
            }
            s++;
            value++;
            end--;
        }

        value = 2;
        s=1, end=n-1;
        for(k=1 ; k<n ; k++){
            for(i=s, j=0 ; j<end ; i++, j++){
                ara[i][j] = value;
            }
            s++;
            value++;
            end--;
        }

        //printing
        for(i=0; i<n ; i++){
            for(j=0 ; j<n ; j++){
                printf("%3d", ara[i][j]);
                if(j!=n-1)
                    printf(" ");
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;

}
