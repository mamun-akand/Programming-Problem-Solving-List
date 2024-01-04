#include<stdio.h>
#include<string.h>

int main(){

    while(1){

        long long int n;
        scanf("%lld", &n);

        long long int ara[n][n];
        char big_num[100];

        if(n==0) break;

        int i, j, big_len;

        long long int value, val;

        for(i=0, value=1 ; i<n ; i++, value*=2){
            val = value;
            for(j=0 ; j<n ; j++){
                ara[i][j] = val;
                val = val*2;
            }
        }

        sprintf(big_num, "%lld", ara[n-1][n-1]);
        big_len = strlen(big_num);

        for(i=0 ; i<n ; i++){
            for(j=0 ; j<n ; j++){
                printf("%*lld", big_len, ara[i][j]);
                if(j != n-1) printf(" ");
            }
            printf("\n");
        }
        printf("\n");

    }

    return 0;
}
