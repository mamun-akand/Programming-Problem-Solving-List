#include<stdio.h>

int main(){

    int i, n, g;

    while( scanf("%d", &n) != EOF ){

        int ara[n];

        for( i=0 ; i<n ; i++ ){

            scanf("%d", &ara[i]);

            if( i>=1 ){

                if( i==1 ){

                    if( ara[i-1] > ara[i] ) g = ara[i-1];

                    else g = ara[i];

                }

                else{

                    if( ara[i] > g ) g = ara[i];

                }

            }

        }

        if(g < 10) printf("1\n");

        if(g >= 10 && g < 20) printf("2\n");

        if(g >= 20) printf("3\n");

    }

    return 0;

}
