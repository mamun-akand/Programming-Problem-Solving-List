#include <stdio.h>

int main(){

    int n, a = 0, b = 1, c, i;
    scanf("%d", &n);

    for(i=1; i<=n ; i++){
        if(i==1){
            printf("%d ", a);
        }
        else if(i==2){
            printf("%d ", b);
        }
        else if(i<n) {
            c = a + b;
            printf("%d ", c);
            a = b;
            b = c;
        }
        else{
            c = a + b;
            printf("%d\n", c);
        }
    }

    return 0;
}
