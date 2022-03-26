#include<stdio.h>

int main(){

    int namta[10][10];
    int row, col, n, m, odd = 0, eve = 0, sum = 0;

    for(row=0, n=1 ; row < 10 ; row++, n++){
        for(col=0, m=1 ; col < 10 ; col++, m++){
            namta[row][col] = n*m;
            sum = sum + (n*m) ;
            if((n*m) % 2 == 1) odd++;
            else eve++;
        }
    }

    for(row=0, n=1 ; row < 10 ; row++, n++){
        for(col=0, m=1 ; col < 10 ; col++, m++){
            printf("%d x %d = %d\n", n, m, namta[row][col]);
        }
        printf("\n");
    }

    printf("\nTotal Odd Number Quantity = %d", odd);
    printf("\nTotal Even Number Quantity = %d", eve);
    printf("\nTotal Sum = %d\n", sum);

    return 0;

}
