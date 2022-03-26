#include<stdio.h>

int main(){

    int n, i;
    scanf("%d", &n);

    for(i=1 ; i<=n ; i++){

        long long int t;
        scanf("%lld", &t);

        if(t<=2014) printf("%lld D.C.\n", 2015-t);
        else if(t>=2015) printf("%lld A.C.\n", (t-2015)+1);

    }

    return 0;

}
