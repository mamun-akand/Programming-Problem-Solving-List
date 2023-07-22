#include <stdio.h>

int  main()
{
    int n=5, i;

    int m=0;
    for(i=1; i<=10; i=i+1) {


        printf("%d x %d = %d\n", n, i, m=m+n);
    }

    return 0;
}
