#include <stdio.h>

int main(){

    int a, b;
    scanf("%d %d", &a, &b);

    printf("1st Line\n");
    printf("2nd Line\n");
    printf("3rd Line\n");

    goto Addition;

    Multiplication:
        printf("AxB = %d\n", a*b);

    goto End;

    Addition:
        printf("A+B = %d\n", a+b);

    goto Multiplication;

    End:
        printf("A/B = %d\n", a/b);

    return 0;
}
