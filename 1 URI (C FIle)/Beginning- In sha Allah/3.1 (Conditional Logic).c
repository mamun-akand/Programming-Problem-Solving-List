#include <stdio.h>

int main()
{
    int n;

    printf("Enter your number : ");
    scanf("%d", &n);

    if(n >= 0)
        {printf("The number is POSITIVE\n");}
    else
        {printf("The number is NEGATIVE\n");}

    return 0;
}
