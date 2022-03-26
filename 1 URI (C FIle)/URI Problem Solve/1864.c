#include<stdio.h>

int main(){

    char quote[34] = "LIFE IS NOT A PROBLEM TO BE SOLVED";

    int n;

    while(scanf("%d", &n) != EOF){
        int i;
        for(i=0 ; i<=n-1 ; i++){
            printf("%c", quote[i]);
        }
        printf("\n");
    }

    return 0;
}
