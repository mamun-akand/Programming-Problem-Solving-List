#include<stdio.h>

int main(){

    int i, j;
    char cha;
    float ara[12][12], sum = 0.0;

    scanf("%c", &cha);

    for(i=0 ; i<12 ; i++){
        for(j=0 ; j<12 ; j++){
            scanf("%f", &ara[i][j]);
        }
    }

    int n = 11;
    float count = 0.0;

    for(i=1 ; i<=5 ; i++){
        for(j=n ; j<=11 ; j++){
            sum += ara[i][j];
            count++;
        }
        n--;
    }

    int m = 7;

    for(i=6 ; i<=10 ; i++){
        for(j=m ; j<=11 ; j++){
            sum += ara[i][j];
            count++;
        }
        m++;
    }

    if(cha == 'S') printf("%.1f\n", sum);
    else if(cha == 'M') printf("%.1f\n", sum/count);

    return 0;

}
