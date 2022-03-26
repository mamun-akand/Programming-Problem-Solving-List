#include<stdio.h>

int main(){

    int N, i, temp, pos;
    scanf("%d", &N);

    int X[N];

    for(i=0 ; i<N ; i++){
        scanf("%d", &X[i]);
    }

    for(i=0 ; i<N ; i++){

        if(i==0){
            if(X[i] < X[i+1]){
                temp = X[i];
                pos = i;
            }
            else{
                temp = X[i+1];
                pos = i+1;
            }
        }

        else if(i>=2){
            if(X[i] < temp) {
                temp = X[i];
                pos = i;
            }
        }

    }

    printf("Menor valor: %d\n", temp);
    printf("Posicao: %d\n", pos);

    return 0;

}
