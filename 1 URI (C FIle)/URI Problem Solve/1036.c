#include<stdio.h>
#include<math.h>

int main(){

    double a, b, c, equation, x1, x2;
    scanf("%lf %lf %lf", &a, &b, &c);

    equation = (b*b)-(4*a*c);

    if(a == 0 || equation < 0 ) {
        printf("Impossivel calcular\n");
    }
    else{
        x1 = (-b + sqrt(equation)) / (2*a);
        x2 = (-b - sqrt(equation)) / (2*a);
        printf("R1 = %0.5lf\n", x1);
        printf("R2 = %0.5lf\n", x2);
    }

    return 0;
}
