#include <stdio.h>

int main(){

    int hs, ms, he, me;
    int dif;

    scanf("%d %d %d %d", &hs, &ms, &he, &me);

    dif = ((he*60)+me) - ((hs*60)+ms);

    if(dif<=0){
        dif = dif+(24*60);
    }

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dif/60, dif%60);

    return 0;
}
