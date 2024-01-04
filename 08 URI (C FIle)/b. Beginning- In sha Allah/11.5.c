#include<stdio.h>
#include<string.h>

int main()
{
    char saarc[7][100] = {"Bangladesh", "India", "Pakistan", "Srilanka", "Nepal", "Bhutan", "Maldives"};
    int row, col, name_length ;

    for(row=0 ; row<7 ; row++){
        name_length = strlen(saarc[row]);
        for(col=0 ; col<name_length ; col++){
            printf("(%d, %d) = %c\n", row, col, saarc[row][col]);
        }
    }

    return 0;

}
