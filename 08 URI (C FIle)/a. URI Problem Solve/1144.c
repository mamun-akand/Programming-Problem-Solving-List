#include <stdio.h>

int main(){

    int n, i, pair=1;
    scanf("%d", &n);

    for(i=1 ; pair<=n ; i++){

        printf("%d %d %d\n", i, i*i, i*i*i);
        printf("%d %d %d\n", i, (i*i)+1, (i*i*i)+1);

        pair++;
    }

    return 0;
}
