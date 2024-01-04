#include <stdio.h>

int main(){

    int n, i, line = 0;
    scanf("%d", &n);

    for(i = 1 ; line < n ; i+=1){
        printf("%d %d %d\n", i, i*i, i*i*i);
        line++;
    }

    return 0;
}
