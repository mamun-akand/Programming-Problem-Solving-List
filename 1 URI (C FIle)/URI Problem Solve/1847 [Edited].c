#include <stdio.h>

int main(){

    int a, b, c;

    while(scanf("%d %d %d", &a, &b, &c) != EOF){

        if( b<a && c>=b ) printf(":)\n");
        else if( b>a && c<=b ) printf(":(\n");

        else if( b>a && c>b && (c-b) < (b-a) ) printf(":(\n");
        else if( b>a && c>b && (c-b) >= (b-a) ) printf(":)\n");


        else if( b<a && c<b && (b-c) < (a-b) ) printf(":)\n");
        else if( b<a && c<b && (b-c) >= (a-b) ) printf(":(\n");


        else if(b==a){

            if(c>b) printf(":)\n");
            else printf(":(\n");

        }

    }

    return 0;
}
