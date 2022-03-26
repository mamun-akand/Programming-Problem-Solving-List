#include <stdio.h>

int main(){

    int p, i;
    int x, y;
    double quotient;

    scanf("%d", &p);

    for(i = 0; i < p ; i++){

        scanf("%d %d", &x, &y);

        if(y == 0){
            printf("divisao impossivel\n");
        }
        else{
            quotient = (double)x/(double)y;
            printf("%.1lf\n", quotient);
        }
    }

    return 0;

}
