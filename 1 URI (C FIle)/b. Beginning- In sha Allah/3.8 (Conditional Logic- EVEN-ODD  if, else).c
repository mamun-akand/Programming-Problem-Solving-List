#include <stdio.h>

int main()
{
    int number, remainder;

    printf("Enter the number : ");
    scanf("%d", &number);

    remainder = number%2;

    if(remainder==0) {
        printf("The number is EVEN");
    }
    else {
        printf("The number is ODD");
    }

    return 0;
}
