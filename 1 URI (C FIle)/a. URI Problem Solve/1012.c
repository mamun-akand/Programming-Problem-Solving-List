#include <stdio.h>

int main() {
    double a, b, c, a_tri, a_cir, a_tra, a_sqr, a_rec;

    scanf("%lf %lf %lf", &a, &b, &c);

    a_tri = 0.5 * a * c;
    a_cir = 3.14159 * c * c;
    a_tra = 0.5 * (a + b) * c;
    a_sqr = b * b;
    a_rec = a * b;

    printf("TRIANGULO: %.3lf\nCIRCULO: %.3lf\nTRAPEZIO: %.3lf\n QUADRADO: %.3lf\nRETANGULO: %.3lf\n", a_tri, a_cir, a_tra, a_sqr, a_rec);

    return 0;
}
