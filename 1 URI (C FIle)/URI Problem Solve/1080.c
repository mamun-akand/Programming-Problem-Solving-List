#include <stdio.h>

int main(){

    int i, ara[100], g, pos;

    for(i=0 ; i<100 ; i++){
        scanf("%d", &ara[i]);
    }

    for(i=0 ; i<100 ; i++){

        if(i==0){

            if(ara[i] < ara[i+1]){
                g =  ara[i+1];
                pos = i+1;
            }
            else{
                g = ara[i];
                pos = i;
            }
        }
        else if(i >= 2){

            if(ara[i] > g){
                g = ara[i];
                pos = i+1;
            }

        }
    }

    printf("%d\n%d\n", g, pos);

    return 0;

}
