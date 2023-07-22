#include<stdio.h>

int main(){

    int ara[4], flag;
    int i, j, k, a, b, c;

    for(i=0 ; i<4 ; i++){
        scanf("%d", &ara[i]);
    }

    for(j=0 ; j<4; j++){
        flag = 1;
        for(k=0 ; k<4 ; k++){
            if(k!=j){
                if(flag == 1)
                    a = ara[k];
                else if(flag == 2)
                    b = ara[k];
                else if(flag == 3)
                    c = ara[k];
                flag++;
            }
        }

        if(flag==4){

            if (a >= b && a >= c) {
                if( (b+c) > a ){
                    printf("S\n");
                    return 0;
                }
            }

            else if (b >= a && b >= c){
                if( (a+c) > b ){
                    printf("S\n");
                    return 0;
                }
            }

            else if (c >= a && c >= b){
                if( (a+b) > c ){
                    printf("S\n");
                    return 0;
                }
            }
        }
    }

    printf("N\n");
    return 0;
}
