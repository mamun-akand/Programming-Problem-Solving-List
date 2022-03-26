#include <stdio.h>

int main(){

    int i, j=7, count;

    for(i=1 ; i<10 ; i=i+2){
        for(count=1 ; count <= 3 ; j--){
            count = count + 1;
            printf("I=%d J=%d\n", i, j);
        }
        j=j+5;
    }

    return 0;
}
