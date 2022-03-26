#include<stdio.h>

int main(){

    int i, j;
    char cha;
    double ara[12][12], sum = 0.0;

    scanf("%c", &cha);

    for(i=0 ; i<12 ; i++){
        for(j=0 ; j<12 ; j++){
            scanf("%lf", &ara[i][j]);
        }
    }

    int n = 1, m = 10;

    for(i=0 ; i<=4 ; i++){
        for(j=n ; j<=m ; j++){
            sum += ara[i][j];
        }
        n++;
        m--;
    }

    if(cha == 'S') printf("%.1lf\n", sum);
    else if(cha == 'M') printf("%.1lf\n", sum/30.0);

    return 0;
}
