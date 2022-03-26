#include <stdio.h>

int main(){

    int n, i, line = 0;
    scanf("%d", &n);

    for(i = 1 ; line < n ; i+=4){
        printf("%d %d %d PUM\n", i, i+1, i+2);
        line++;
    }

    return 0;
}
