#include <stdio.h>

int main()
{
    double n;
    double q;
    int qi;
    double s;
    int r;
    int d=2;

    printf("Enter your required value: ");
    scanf("%lf", &n);

    q=n/2;
    qi=n/2;

    printf("%lf - %d = %lf\n", q, qi, s=q-qi);
    printf("%lf * %d = %d\n\n", s, d , r=s*2);

    if(r==0) {
        printf("The number is EVEN\n");
    }
    else {
        printf("The number is ODD\n");
    }
    return 0;

}
