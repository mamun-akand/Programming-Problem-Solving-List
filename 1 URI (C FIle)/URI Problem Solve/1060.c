#include <stdio.h>

int main() {

    int num=0;
    double a, b, c, d, e, f;

    scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);

        if(a>0){
            num=num+1;
        }
        if(b>0){
            num=num+1;
        }
        if(c>0){
            num=num+1;
        }
        if(d>0){
            num=num+1;
        }
        if(e>0){
            num=num+1;
        }
        if(f>0){
            num=num+1;
        }


    printf("%d valores positivos\n", num);

    return 0;

}
