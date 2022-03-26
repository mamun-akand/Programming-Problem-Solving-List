#include<stdio.h>

int main(){

    int t;
    scanf("%d", &t);
    int i, c, q;
    double sum = 0;

    for(i=1 ; i<=t ;i++){

        scanf("%d %d", &c, &q);
        if(c == 1001) sum = sum + (1.50*q);
        else if(c == 1002) sum = sum + (2.50*q);
        else if(c == 1003) sum = sum + (3.50*q);
        else if(c == 1004) sum = sum + (4.50*q);
        else if(c == 1005) sum = sum + (5.50*q);

    }

    printf("%0.2lf\n", sum);

    return 0;

}
