#include<stdio.h>
#include<string.h>

int main(){

    char ara[100];
    scanf("%s", ara);

    int l = strlen(ara);
    //printf("%d", l);
    int i, j;
    for(i=0, j=l-1 ; i<(l-1)/2 ; i++, j--){
        if(ara[i] != ara[j]){
            printf("Not Palindrome\n");
            return 0;
        }
    }

    printf("Palindrome\n");

    return 0;
}
