#include <stdio.h>

int main()
{
    int n;

    for(n=1; n<=10; n=n+1) {
        printf("%d + ", n^2);
    }
}
