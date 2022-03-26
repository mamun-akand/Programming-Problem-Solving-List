#include <stdio.h>

int main(){

    int ara[3], a, b, c;
    scanf("%d %d %d", &ara[0], &ara[1], &ara[2]);

    a = ara[0];
    b = ara[1];
    c = ara[2];

    int i, j, temp;

    for(i=0 ; i < 3 ; i++){
        for(j=0 ; j < 3-i-1 ; j++){
            if( ara[j] > ara[j+1] ) {
                temp = ara[j+1];
                ara[j+1] = ara[j];
                ara[j] = temp;
            }
        }
    }

    printf("%d\n%d\n%d\n\n", ara[0], ara[1], ara[2]);
    printf("%d\n%d\n%d\n", a, b,c);

    return 0;
}
