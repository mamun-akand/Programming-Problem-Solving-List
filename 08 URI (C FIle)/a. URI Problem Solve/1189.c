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

    int n = 0, m = 0;
    float count = 0.0;

    for(i=1 ; i<=5 ; i++, m++){
        for(j=n ; j<=m ; j++){
            sum += ara[i][j];
            count++;
        }
    }

    n = 0;
    m = 4;

    for(i=6 ; i<=10 ; i++, m--){
        for(j=n ; j<=m ; j++){
            sum += ara[i][j];
            count++;
        }
    }

    if(cha == 'S') printf("%.1f\n", sum);
    else if(cha == 'M') printf("%.1f\n", sum/count);

    return 0;

}
