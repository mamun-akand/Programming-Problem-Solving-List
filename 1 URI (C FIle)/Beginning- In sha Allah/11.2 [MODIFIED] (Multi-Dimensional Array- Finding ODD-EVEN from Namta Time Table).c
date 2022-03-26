#include <stdio.h>

int main()
{
    int namta[10][10];

    int row, col, even=0, odd=0, sum=0;

    for(row = 0 ; row < 10 ; row++){
        for(col = 0 ; col < 10 ; col++){
            namta[row][col] = (row+1) * (col+1);
        }
    }

    for(row = 0 ; row < 10 ; row++){
        for(col = 0 ; col < 10 ; col++){
            printf("%d x %d = %d\n", (row+1), (col+1), namta[row][col]);
        }
        printf("\n");
    }

    for(row = 0 ; row < 10 ; row++){
        for(col = 0 ; col < 10 ; col++){
            if(namta[row][col] % 2 == 0) {
                even++;
            }
            else{
                odd++;
            }
        }
    }

    printf("Even number in total\t= %d\n", even);
    printf("Odd number in total\t= %d\n", odd);

    for(row = 0 ; row < 10 ; row++){
        for(col = 0 ; col < 10 ; col++){
            sum = sum + namta[row][col];
        }
    }

    printf("Total sum of all namtas\t= %d\n", sum);


    return 0;

}
