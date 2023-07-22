#include <stdio.h>

int main(){

    int i, j;
    double s = 1.0, div;

    for(i=3, j=2 ; i<=39 ; i=i+2, j=j*2){
        div = ((double)i/j);
        s = s + div;
    }

    printf("%0.2lf\n", s);

    return 0;
}
