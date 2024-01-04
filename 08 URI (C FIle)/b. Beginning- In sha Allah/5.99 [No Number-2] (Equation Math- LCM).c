#include <stdio.h>

int main()
{
    int num1, num2, bigger, fact=1;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    bigger = (num1 > num2) ? num1 : num2 ;         /* New way to find bigger number, condition manle 'num1' or else 'num2' */

    for( ; fact ; bigger++) {                           /* Following this : https://www.youtube.com/watch?v=XwSf-rvdkzo*/

        if(bigger%num1==0 && bigger%num2==0) {
            printf("LCM is : %d", bigger);
            fact=0;
        }
    }

    return 0;
}
