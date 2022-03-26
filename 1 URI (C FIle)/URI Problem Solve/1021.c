#include <stdio.h>

int main(){
    double n;
    int a, b, c, d, e, f, g, h, i, j, k, l;

    scanf("%lf", &n);

    l = n * 100;

    a = l / 10000;
    l = l % 10000;

    b = l / 5000;
    l = l % 5000;

    c = l / 2000;
    l = l % 2000;

    d = l / 1000;
    l = l % 1000;

    e = l / 500;
    l = l % 500;

    f = l / 200;
    l = l % 200;

    g = l / 100;
    l = l % 100;

    h = l / 50;
    l = l % 50;

    i = l / 25;
    l = l % 25;

    j = l / 10;
    l = l % 10;

    k = l / 5;
    l = l % 5;

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", a);
    printf("%d nota(s) de R$ 50.00\n", b);
    printf("%d nota(s) de R$ 20.00\n", c);
    printf("%d nota(s) de R$ 10.00\n", d);
    printf("%d nota(s) de R$ 5.00\n", e);
    printf("%d nota(s) de R$ 2.00\n", f);

    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", g);
    printf("%d moeda(s) de R$ 0.50\n", h);
    printf("%d moeda(s) de R$ 0.25\n", i);
    printf("%d moeda(s) de R$ 0.10\n", j);
    printf("%d moeda(s) de R$ 0.05\n", k);
    printf("%d moeda(s) de R$ 0.01\n", l);

    return 0;
}
