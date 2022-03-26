#include <stdio.h>

int main()
{
    int total_marks[] = {6, 7, 4, 6, 9, 7, 6, 2, 4, 3, 4, 1};
    int count[11];
    int i, j;

    for( i=0; i<11; i++ ) {
        count[i] = 0;
    }

    for(i=0 ; i<12 ; i++) {
        count[total_marks[i]]++;

        for(j=0 ; j<11 ; j++) {
            printf("%d", count[j]);
        }
        printf("\n");
    }

    return 0;
}


