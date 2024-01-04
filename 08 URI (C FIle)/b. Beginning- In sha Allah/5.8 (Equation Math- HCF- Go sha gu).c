#include <stdio.h>

int main()
{
    int a, b, x, hcf;

    printf("Enter the first value: ");
    scanf("%d", &a);

    printf("Enter the second value: ");
    scanf("%d", &b);

    if(a < b) {
        x = a;
    }
    else {
        x = b;
    }

    for( x=x ; x>0; x=x-1 ) {
        if(a%x == 0 && b%x == 0) {
            hcf = x;
            break;
            }
        }

    printf("The HCF is : %d\n", hcf);

    return 0;
}
