#include <stdio.h>

int main()
{
    int n;
    int i;
    int m; //For Time Table by SUMMATION process

    for(n=1; n<=20; n=n+1) {
        m=0;
        for(i=1; i<=10; i=i+1) {
            m=m+n;
            printf("%d x %d = %d\n",n, i, m);

            if(i==10) {
                printf("\n");
            }
        }
    }
    return 0;
}
