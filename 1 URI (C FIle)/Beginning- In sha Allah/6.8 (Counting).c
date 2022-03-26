#include <stdio.h>

int main()
{
    int total_marks[40] = {86, 78, 94, 68, 92, 78, 64, 62, 72, 61, 72, 66, 65,
65, 80, 72, 62, 68, 81, 62, 56, 68, 58, 56, 82, 70, 74, 78, 76, 84, 88, 73,
62, 66, 76, 70, 67, 65, 77, 63};
    int i, marks, count, count2=0;

    for(marks=50; marks<100 ; marks++) {
        count=0;
        for(i=0 ; i<=40 ; i++) {
            if(total_marks[i]==marks) {
                count++;
            }
        }
        if (count==0) {continue;}       // If counting number zero, then it won't show it.
        printf("Marks:%d, Counting :%d\n", marks, count);
        count2 = count2+count;
    }
    printf("In total %d\n", count2);

    return 0;
}
