#include<stdio.h>
#include<math.h>

int main(){

    int a, b, c, q, r;
    scanf("%d %d", &a, &b);

    if(a >= 0){
        q = a / b;
        r = a % b;
    }
    else if(a < 0){
       for(r=0 ; r < abs(b) ; r++){
            c = a-r;
            if(c%b==0) break;
       }
       q = c/b;
    }

    printf("%d %d\n", q, r);

    return 0;

}
