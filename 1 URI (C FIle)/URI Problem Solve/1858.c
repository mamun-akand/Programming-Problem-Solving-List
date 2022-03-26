#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int ara[n], pos, i;

    for(i=0 ; i<n ; i++){

        scanf("%d", &ara[i]);

        if(i == 1){
            if(ara[i-1] <= ara[i]) pos = i-1;
            else pos = i;
        }

        else if(i > 1){
            if(ara[i] < ara[pos] && ara[i] != ara[pos]) pos = i;
        }

    }

    printf("%d\n", pos+1);

    return 0;

}
