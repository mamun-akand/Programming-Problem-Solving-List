#include<stdio.h>

int main(){

    int n;

    while(1){

        int i, j;
        scanf("%d", &n);

        if(n==0) break;

        int ara[n][n];

        int row, ini, end, value ;

        row = (n%2==0) ? n/2 : (n/2)+1 ;

        ini = 0, end = n, value = 1;
        for(i=0; i<row ; i++){
            for(j=ini ; j<end ; j++){
                ara[i][j] = value;
            }
            value++;
            ini++;
            end--;
        }

        ini = 0, end = n, value = 1;
        for(i=n-1; i>=row ; i--){
            for(j=ini ; j<end ; j++){
                ara[i][j] = value;
            }
            value++;
            ini++;
            end--;
        }

        int col = (n%2==0) ? (n/2)-1 : (n/2) ;

        ini = 1, end = n-1, value = 1;
        for(i=0; i<col ; i++){
            for(j=ini ; j<end ; j++){
                ara[j][i] = value;
            }
            value++;
            ini++;
            end--;
        }

        ini = 1, end = n-1, value = 1;
        for(i=n-1; i>col ; i--){
            for(j=ini ; j<end ; j++){
                ara[j][i] = value;
            }
            value++;
            ini++;
            end--;
        }

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
