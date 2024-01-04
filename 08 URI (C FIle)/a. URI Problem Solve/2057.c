#include<stdio.h>

int main(){

    int s, t, z;
    scanf("%d %d %d", &s, &t, &z);

    if(s==0) s = 24;

    int local = s + t + z;

    if(local <= 23) printf("%d\n", local);
    else if(local >= 24) printf("%d\n", local-24);

    return 0;
}
