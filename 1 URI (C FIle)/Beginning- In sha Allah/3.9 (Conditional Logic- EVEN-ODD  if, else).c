#include <stdio.h>

int main()
{
    int number;

    printf("Enter the number : ");
    scanf("%d", &number);

    if(number % 2 == 0) {
        printf("The number is EVEN");
    }
    else {
        printf("The number is ODD");
    }

    return 0;
}
