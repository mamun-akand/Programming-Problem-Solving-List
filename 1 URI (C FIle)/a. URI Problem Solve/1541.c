#include<stdio.h>
#include<math.h>

int main(){

    int a, b, c;

    while(1){

        scanf("%d", &a);
        if(a==0) break;

        scanf("%d %d", &b, &c);

        int area = a*b;

        double req_area = (100*area)/c;

        int req_side = sqrt(req_area);

        printf("%d\n", req_side);

    }
    return 0;

}
