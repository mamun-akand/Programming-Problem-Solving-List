#include <stdio.h>

int main()
{
    int count[101];
    int i;
    int total_marks[40];

    for(i=0; i<40 ; i++) {
        scanf("%d", &total_marks[i]);       //for user input of marks in array.
    }

    for( i=0; i<101; i++ ) {
        count[i] = 0;
    }

    for( i=0 ; i<40 ; i++ ) {
        count[total_marks[i]]++ ;
    }

    for( i=50 ; i<=100 ; i++ ) {
        if(count[i]==0) {continue;}         //to remove those numbers, which counting number is ZERO.
        printf("Marks : %d, Count : %d\n", i, count[i]);
    }

    return 0;
}



