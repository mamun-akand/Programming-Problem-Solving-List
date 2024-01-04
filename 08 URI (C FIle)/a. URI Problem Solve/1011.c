#include <stdio.h>

int main() {
    double pi = 3.14159, r, volume;

    scanf("%lf", &r);

    volume = 4/3.0 * pi * r * r * r;

    printf("VOLUME = %.3lf", volume);

    return 0;
}
