#include<stdio.h>

int main(){

    char plr1[6], plr2[6];
    int n, i;
    scanf("%d", &n);

    for(i=1 ; i<=n ; i++){
        scanf("%s %s", plr1, plr2);

        if(plr1[1] == 't' && plr2[1] == 'e')
            printf("Jogador 1 venceu\n");

        else if(plr1[1] == 'e' && plr2[1] == 't')
            printf("Jogador 2 venceu\n");

        else if(plr1[1] == 'e' && plr2[1] == 'a')
            printf("Jogador 1 venceu\n");

        else if(plr1[1] == 'a' && plr2[1] == 'e')
            printf("Jogador 2 venceu\n");

        else if(plr1[1] == 'a' && plr2[1] == 't')
            printf("Jogador 2 venceu\n");

        else if(plr1[1] == 't' && plr2[1] == 'a')
            printf("Jogador 1 venceu\n");

        else if(plr1[1] == 'a' && plr2[1] == 'a')
            printf("Ambos venceram\n");

        else if(plr1[1] == 'e' && plr2[1] == 'e')
            printf("Sem ganhador\n");

        else if(plr1[1] == 't' && plr2[1] == 't')
            printf("Aniquilacao mutua\n");
    }

    return 0;
}
