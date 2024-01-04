#include<stdio.h>

int main(){

    int n, t = 0;

    int i, j;

    while(scanf("%d", &n) != EOF){

        t++;
        int sum = 0;

        for(i=1 ; i<=n ; i++){
            for(j=1 ; j<=i ; j++){
                sum++;
            }
        }

        if(n==0) printf("Caso %d: %d numero\n", t, sum+1);
        else printf("Caso %d: %d numeros\n", t, sum+1);

        printf("0");

        for(i=1 ; i<=n ; i++){
            for(j=1 ; j<=i ; j++){
                printf(" %d", i);
            }
        }

        printf("\n");
        printf("\n");

    }

    return 0;
}
