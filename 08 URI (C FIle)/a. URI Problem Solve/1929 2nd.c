#include<stdio.h>

int main(){

    int ara[4], i, j, temp;

    for(i=0 ; i<4 ; i++){
        scanf("%d", &ara[i]);
    }

    for(j=0 ; j<4 ; j++){
        if(ara[j] > ara[j+1]){
            temp = ara[j+1];
            ara[j+1] = ara[j];
            ara[j] = temp;
        }
    }

     for(i=0 ; i<4 ; i++){
        printf("%d", ara[i]);
    }

    return 0;

}
