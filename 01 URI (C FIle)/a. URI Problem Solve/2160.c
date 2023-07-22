#include<stdio.h>
#include<string.h>

int main(){

    char txt[501];
    gets(txt);

    int len = strlen(txt);

    if(len <= 80) printf("YES\n");
    else printf("NO\n");

    return 0;

}
