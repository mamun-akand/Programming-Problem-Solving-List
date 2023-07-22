#include <stdio.h>

int main()
{
    int n, sum;

    printf("Enter the value of: ");
    scanf("%d", &n);

    sum = n*(n+1) / 2; /* Sum of sequence : 1 + 2 + 3 +......+ 998 + 999 + 1000 */

    printf("Sum of sequence is : %d\n", sum);

    return 0;
}
