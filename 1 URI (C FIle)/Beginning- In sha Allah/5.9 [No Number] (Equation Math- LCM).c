#include <stdio.h>

int main()
{
    int num1, num2, bigger;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    if(num1>num2) {
        bigger = num1;
    }
    else {
        bigger = num2;
    }

    for( ; ; bigger++) {                           /* Following this : https://www.youtube.com/watch?v=XwSf-rvdkzo*/

        if(bigger%num1==0 && bigger%num2==0) {
            printf("LCM is : %d", bigger);
            break;
        }
    }

    return 0;
}
