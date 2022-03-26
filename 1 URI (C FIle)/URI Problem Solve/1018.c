#include <stdio.h>

int main(){
    int n, note;

    scanf("%d", &n);

    if(n>0 && n<1000000) {
        printf("%d\n", n);

        note = n/100;
        printf("%d nota(s) de R$ 100,00\n", note);
        n = n - note*100;

        note = 0;
        note = n/50;
        printf("%d nota(s) de R$ 50,00\n", note);
        n = n - note*50;

        note = 0;
        note = n/20;
        printf("%d nota(s) de R$ 20,00\n", note);
        n = n - note*20;

        note = 0;
        note = n/10;
        printf("%d nota(s) de R$ 10,00\n", note);
        n = n - note*10;

        note = 0;
        note = n/5;
        printf("%d nota(s) de R$ 5,00\n", note);
        n = n - note*5;

        note = 0;
        note = n/2;
        printf("%d nota(s) de R$ 2,00\n", note);
        n = n - note*2;

        note = 0;
        note = n/1;
        printf("%d nota(s) de R$ 1,00\n", note);

        return 0;
    }
}
