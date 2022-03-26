#include<stdio.h>

int main(){

    int num[5][5] = {{6, 4, 7, 8, 9}, {3, 7, 1, 9, 9},
    {8, 6, 4, 2, 7}, {2, 4, 2, 5, 9}, {4, 1, 6, 7, 3}};

    int row, col, sum=0;

    for(col=0 ; col<5 ; col++){
        for(row=0 ; row<5 ; row++){
            sum += num[row][col];
        }
        printf("sum of column %d : %d\n", col+1, sum);
        sum = 0;
    }

    return 0;

}
