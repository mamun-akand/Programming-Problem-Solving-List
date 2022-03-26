#include<stdio.h>
#include<string.h>

int main(){

    char twt[600];
    gets(twt);

    int len = strlen(twt);

    if(len<=140) printf("TWEET\n");
    else printf("MUTE\n");

    return 0;

}
