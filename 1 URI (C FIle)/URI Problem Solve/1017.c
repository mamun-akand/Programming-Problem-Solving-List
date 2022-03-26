#include <stdio.h>

int main(){
    int h, s, d;
    double f;

    scanf("%d %d", &h, &s);

    d = h*s;
    f = d/12.0;

    printf("%.3lf\n", f);

    return 0;
}
