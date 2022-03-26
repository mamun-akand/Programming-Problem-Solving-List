#include <stdio.h>

int main()
{
    int total_marks[40] = {86, 78, 94, 68, 92, 78, 64, 62, 72, 61, 72, 66, 65,
65, 80, 72, 62, 68, 81, 62, 56, 68, 58, 56, 82, 70, 74, 78, 76, 84, 88, 73,
62, 66, 76, 70, 67, 65, 77, 63};
    int count[101];
    int i;

    for( i=0; i<101; i++ ) {
        count[i] = 0;
    }

    for( i=0 ; i<40 ; i++ ) {
        t_m = total marks[i];
        count[total_marks[i]]++ ;
    }

    for( i=50 ; i<=100 ; i++ ) {
        if(count[i]==0) {continue;}         //to remove those numbers, which counting number is ZERO.
        printf("Marks : %d, Count : %d\n", i, count[i]);
    }

    return 0;
}



