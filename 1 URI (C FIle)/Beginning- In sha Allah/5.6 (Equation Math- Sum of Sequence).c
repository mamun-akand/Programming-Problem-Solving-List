#include <stdio.h>

int main()
{
    int n, i, sum;

    printf("Enter the sequence last number : ");
    scanf("%d", &n);

    for(i=1, sum=0; i<=n; i=i+1) {
        sum = sum+i;
    }

    printf("sum is : %d ", sum); //Last e jei sum value ashbe seta print korbe, ejonno baire printf.

    return 0;
}
