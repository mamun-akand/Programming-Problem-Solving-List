#include <stdio.h>

int main()
{
    int num1, num2;

    printf("Please Enter The First Number: ");
    scanf("%d", &num1);

    printf("Please Enter The Second Number: ");
    scanf("%d", &num2);

    printf("%d is added with %d, then the result is %d\n", num1, num2, num1+num2);
    printf("%d is subtarcted with %d, then the result is %d\n", num1, num2, num1-num2);
    printf("%d is multiplied with %d, then the result is %d\n", num1, num2, num1*num2);
    printf("%d is divided with %d, then the result is %d\n", num1, num2, num1/num2);

    return 0;
}
