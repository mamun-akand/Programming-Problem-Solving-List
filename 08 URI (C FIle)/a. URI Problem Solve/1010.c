#include <stdio.h>

int main() {
    int p1, p2, q1, q2;
    double c1, c2, total;

    scanf("%d %d %lf", &p1, &q1, &c1);
    scanf("%d %d %lf", &p2, &q2, &c2);

    total = q1*c1 + q2*c2 ;

    printf("VALOR A PAGAR: R$ %.2lf\n", total);

    return 0;
}
