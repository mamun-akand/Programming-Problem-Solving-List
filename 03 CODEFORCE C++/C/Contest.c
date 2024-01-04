#include<stdio.h>

int main(){

    long long int t, a, b, c;
    scanf("%lld", &t);

    while(t--){

        scanf("%lld %lld %lld", &a, &b, &c);

        if(a==b && c%2==0) printf("YES\n");
        else if(a==c && b%2==0) printf("YES\n");
        else if(b==c && a%2==0) printf("YES\n");

        else if(a == b+c || b == a+c || c == a+b ) printf("YES\n");
        else printf("NO\n");

    }

    return 0;
}
