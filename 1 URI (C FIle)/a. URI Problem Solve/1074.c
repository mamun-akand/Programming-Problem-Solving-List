#include <stdio.h>

int main(){

    int n, i;
    scanf("%d", &n);
    int ara[n];

    for(i=0 ; i<n ; i++){
        scanf("%d", &ara[i]);
    }

    for(i = 0 ; i < n ; i++){

        if(ara[i] == 0){
            printf("NULL\n");
        }

        else if(ara[i]%2 != 0 && ara[i] > 0){
            printf("ODD POSITIVE\n");
        }

        else if(ara[i]%2 != 0 && ara[i] < 0){
            printf("ODD NEGATIVE\n");
        }

        else if(ara[i]%2 == 0 && ara[i] < 0){
            printf("EVEN NEGATIVE\n");
        }

        else if(ara[i]%2 == 0 && ara[i] > 0){
            printf("EVEN POSITIVE\n");
        }
    }

    return 0;

}
