#include <stdio.h>

int main(){

    int x, y, i, seq=0;
    scanf("%d %d", &x, &y);

    for(i=1; i<=y ; i++){
        seq++;


        if(seq == x){
            printf("%d\n",i);
            seq=0;
        }

        else{
            printf("%d ", i);
        }

    }

    return 0;
}
