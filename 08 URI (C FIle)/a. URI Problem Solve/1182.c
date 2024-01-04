#include<stdio.h>

int main(){

    int c, i, j;
    char cha;
    float ara[12][12], sum=0;

    scanf("%d %c", &c, &cha);

    for(i=0 ; i<12 ; i++){
        for(j=0 ; j<12 ; j++){
            scanf("%f", &ara[i][j]);
        }
    }

    for(i=0 ; i<12 ; i++){
        sum += ara[i][c];
    }

    if(cha == 'S') printf("%.1f\n", sum);
    else if(cha == 'M') printf("%.1f\n", sum/12.0);

    return 0;

}
