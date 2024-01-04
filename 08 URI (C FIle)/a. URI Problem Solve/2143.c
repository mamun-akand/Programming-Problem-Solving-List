#include<stdio.h>

int main(){

    int tst, i, n;

    while( scanf("%d", &tst) && tst != 0){

       for(i=1 ; i<=tst ; i++){

            scanf("%d", &n);

            if(n%2 != 0) printf("%d\n", (n-1)*2+1);
            else printf("%d\n", (n-2)*2+2);

       }

    }

    return 0;
}
