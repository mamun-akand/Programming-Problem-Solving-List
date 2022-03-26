#include <stdio.h>

int main(){

    int n, i, in = 0, out = 0;
    scanf("%d", &n);

    int ara[n];
    for(i=0 ; i<n ; i++){
        scanf("%d", &ara[i]);
    }

    for(i=0 ; i<n ; i++){
        if(ara[i] >= 10 && ara[i] <= 20){
            in = in + 1;
        }
        else{
            out = out + 1;
        }
    }

    printf("%d in\n%d out", in, out);

    return 0;
}
