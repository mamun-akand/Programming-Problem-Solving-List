#include <stdio.h>

int main()
{
    int marks[5];
    int i;

    for(i=0 ; i<5 ; i++) {
        scanf("%d", &marks[i]);
    }

    for(i=0 ; i<5 ; i++) {
        printf("%dth is : %d\n", i, marks[i]);
    }

    return 0;
}
