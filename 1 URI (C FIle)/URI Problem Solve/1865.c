#include<stdio.h>

int main(){

    int t, i, n;
    char ara[100];

    scanf("%d", &t);

    for( i=0 ; i<t ; i++ ) {

        scanf("%s", ara);

        scanf("%d", &n);

        if( ara[0]=='T' && ara[1]=='h' && ara[2] == 'o' && ara[3] == 'r' )
            printf("Y\n");
        else
            printf("N\n");
        }

    return 0;
}
