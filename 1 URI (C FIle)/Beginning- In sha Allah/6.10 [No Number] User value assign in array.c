#include <stdio.h>

int main()
{
    int i, n;

    printf("Enter how many numbers you have : ");
    scanf("%d", &n);

    int marks[n];


    for(i=0 ; i<n ; i++) {
        scanf("%d", &marks[i]);
    }

    for(i=0 ; i<n ; i++) {
        printf("%dth is : %d\n", i, marks[i]);
    }

    return 0;
}
