#include <stdio.h>

int main(){

    int R1, R2, C;
    int N;
    scanf("%d", &N);

    while(N){

        scanf("%d %d", &R1, &R2);
        C = R1 + R2;
        printf("%d\n", C);

        N--;

    }

    return 0;

}
