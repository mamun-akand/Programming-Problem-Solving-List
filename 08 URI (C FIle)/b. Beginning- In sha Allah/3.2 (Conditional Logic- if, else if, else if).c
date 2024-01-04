#include <stdio.h>

int main()
{
    int n=10;

    if(n<0) {
        printf("The number is NEGATIVE");
    }
    else if (n==0) {
        printf("The number is ZERO!");
    }
    else if(n>0) {
        printf("The number is POSITIVE");
    }

    return 0;
}
