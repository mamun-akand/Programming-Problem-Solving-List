#include<stdio.h>
#include<string.h>

int main(){

    int x, y, i, j;
    scanf("%d %d", &x, &y);

    int ara[x][y];

    for(i=0 ; i<x ; i++){
        for(j=0 ; j<y ; j++){
            scanf("%d", &ara[i][j]);
        }
    }

    for(i=0 ; i<x-1 ; i++){
        for(j=1 ; j<y-1 ; j++){
            if(ara[i][j]==42){
                if(ara[i][j+1]==7 && ara[i][j-1]==7 && ara[i-1][j]==7)
                    if(ara[i+1][j]==7 && ara[i-1][j-1]==7 && ara[i-1][j+1]==7)
                        if(ara[i+1][j-1]==7 && ara[i+1][j+1]==7){
                            printf("%d %d\n", i+1, j+1);
                            return 0;
                        }
            }
        }
    }

    printf("0 0\n");

    return 0;
}
