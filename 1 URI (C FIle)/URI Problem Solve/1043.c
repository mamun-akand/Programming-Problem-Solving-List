#include <stdio.h>
#include <stdlib.h>

int main(){

    double n1, n2, n3, greater, greatest, sum, perimeter, area;
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    greater = (n1+n2+abs(n1-n2))/2;
    greatest = (greater+n3+abs(greater-n3))/2;

    if(greatest == n1){
        sum = n2 + n3;
    }
    else if(greatest == n2){
        sum = n1 + n3;
    }
    else{
        sum = n1 + n2;
    }

    if(sum > greatest){
        perimeter = n1 + n2 + n3;
        printf("Perimetro = %0.1lf\n", perimeter);
    }

    else {
        area = 0.5 * (n1+n2) * n3;
        printf("Area = %0.1lf\n", area);
    }

    return 0;
}
