#include <stdio.h>

int main()
{
    int n=5;
    int i=1;

    for( ; ; ) {
        i++;

        if(i%2==1) {
            continue;
        }
        printf("%d x %d = %d\n", n, i, n*i);


        if(i>10) {
            break;
        }
    }

    return 0;
}
