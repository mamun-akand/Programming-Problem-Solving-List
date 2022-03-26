#include <stdio.h>

int main(){

    int n, i, temp, c = 0, r = 0, s = 0;
    char letter;
    float cp, rp, sp, total;

    scanf("%d", &n);
    for(i=0 ; i<n ; i++) {

        scanf("%d %c", &temp, &letter);

        if(letter == 'C'){
            c = c + temp;
        }

        else if(letter == 'R'){
            r = r + temp;
        }

        else if(letter == 'S'){
            s = s + temp;
        }

    }

    total = c+r+s;

    cp = (c/total)*100.0;
    rp = (r/total)*100.0;
    sp = (s/total)*100.0;

    printf("Total: %d cobaias\n", c+r+s);

    printf("Total de coelhos: %d\n", c);
    printf("Total de ratos: %d\n", r);
    printf("Total de sapos: %d\n", s);

    printf("Percentual de coelhos: %0.2f %%\n", cp);
    printf("Percentual de ratos: %0.2f %%\n", rp);
    printf("Percentual de sapos: %0.2f %%\n", sp);

    return 0;
}
