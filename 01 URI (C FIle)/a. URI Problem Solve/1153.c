#include <stdio.h>

int main(){

    int n, i, product = 1;
    scanf("%d", &n);

    for(i = n ; i >= 1 ; i--){
        product = product * i;
    }

    printf("%d\n", product);

    return 0;
}
