#include <stdio.h>

int main(){

    int ds, hs, ms, ss, de, he, me, se;
    int d, h, m, s;

    scanf("Dia %d", &ds);
    scanf("%d : %d : %d\n", &hs, &ms, &ss);

    scanf("Dia %d", &de);
    scanf("%d : %d : %d\n", &he, &me, &se);

    s = se - ss;
    m = me - ms;
    h = he - hs;
    d = de - ds;

    if(s<0){
        s = s + 60;
        m = m - 1;
    }

    if(m<0){
        m = m + 60;
        h = h - 1;
    }

    if(h<0){
        h = h + 24;
        d = d - 1;
    }

    printf("%d dia(s)\n", d);
    printf("%d hora(s)\n", h);
    printf("%d minuto(s)\n", m);
    printf("%d segundo(s)\n", s);

    return 0;
}
