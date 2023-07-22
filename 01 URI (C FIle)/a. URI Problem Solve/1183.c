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

    int c_start = 1;
    int num = 0;

    for(i=0 ; i<12 ; i++){
        if(i==11) break;
        for(j=c_start ; j<12 ; j++){
            sum += ara[i][j];
            num++;
        }
        c_start++;
    }

    if(cha == 'S') printf("%.1f\n", sum);
    else if(cha == 'M') printf("%.1f\n", sum/66.0);

    return 0;

}
