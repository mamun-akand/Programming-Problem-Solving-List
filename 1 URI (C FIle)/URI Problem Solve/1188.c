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

    int n = 5, m = 6;
    double count = 0.0;

    for(i=7 ; i<12 ; i++, n--, m++){
        for(j=n ; j<=m ; j++){
            sum += ara[i][j];
            count++;
        }
    }

    if(cha == 'S') printf("%.1lf\n", sum);
    else if(cha == 'M') printf("%.1lf\n", sum/count);

    return 0;

}
