#include<stdio.h>

int main(){

    int i, j;
    char cha;
    float ara[12][12], sum=0;

    scanf("%c", &cha);

    for(i=0 ; i<12 ; i++){
        for(j=0 ; j<12 ; j++){
            scanf("%f", &ara[i][j]);
        }
    }

    int n = 10;

    for(i=0 ; i<=10 ; i++){
        for(j=0 ; j<=n ; j++){
            sum += ara[i][j];
        }
        n--;
    }

    if(cha == 'S') printf("%.1f\n", sum);
    else if(cha == 'M') printf("%.1f\n", sum/66.0);

    return 0;

}
