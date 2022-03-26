#include <stdio.h>

int main()
{
    int num1, num2, sum, sub, mul, div;

    printf("Please Enter The First Number: ");
    scanf("%d", &num1);

    printf("Please Enter The Second Number: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;

    printf("Summation is %d\n", sum);
    printf("Subtraction is %d\n", sub);
    printf("Multiplication is %d\n", mul);
    printf("Division %d\n", div);

    return 0;
}
