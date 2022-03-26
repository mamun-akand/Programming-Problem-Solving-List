#include<stdio.h>

int main(){

    int a, b;
    char s;

    scanf("%d %c %d", &a, &s, &b);

    if(a>b){
        if(s == '>') printf("Right\n");
        else printf("Wrong\n");
    }

    else if(a<b){
        if(s == '<') printf("Right\n");
        else printf("Wrong\n");
    }

    else if(a==b){
        if(s == '=') printf("Right\n");
        else printf("Wrong\n");
    }

    return 0;

}
