#include <stdio.h>

int main()
{
    int ara[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i;

    for( i=0 ; i<=9 ; i=i+1 ) {
        printf(" %dth element is %d\n", i+1, ara[i]);
    }

    return 0;

}
