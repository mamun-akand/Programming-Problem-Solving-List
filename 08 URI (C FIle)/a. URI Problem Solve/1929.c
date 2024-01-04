#include<stdio.h>

int main(){

    int ara[4], i, j, k, l, flag = 0;

    for(l=0 ; l<4 ; l++){
        scanf("%d", &ara[l]);
    }

    for(i=0; i<4 ; i++){

        for(j=0 ; j<4 ; j++){

            if( i == j ) continue;

            for(k=0 ; k<4 ; k++){

                if(ara[i] == ara[k] || ara[j] == ara[k]) continue;

                else if( (ara[i] + ara[j]) > ara[k] ){

                    printf("S\n");
                    flag = 1;

                    return 0;
                }
            }
        }
    }

    if(flag == 0) printf("N\n");

    return 0;

}
