#include <stdio.h>

int main() {

    int num=0;
    int a, b, c, d, e;

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

        if(a%2==0){
            num=num+1;
        }
        if(b%2==0){
            num=num+1;
        }
        if(c%2==0){
            num=num+1;
        }
        if(d%2==0){
            num=num+1;
        }
        if(e%2==0){
            num=num+1;
        }

    printf("%d valores pares\n", num);

    return 0;

}
