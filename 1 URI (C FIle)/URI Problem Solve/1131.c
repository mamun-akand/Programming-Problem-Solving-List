#include <stdio.h>

int main(){

    int in, gr, res, grenais = 0, inter = 0, gremio = 0, empates = 0;

    while(1){

        scanf("%d %d", &in, &gr);
        scanf("%d", &res);

        printf("Novo grenal (1-sim 2-nao)\n");
        grenais++;

        if(in > gr){
            inter++;
        }
        else if(in == gr){
            empates++;
        }
        else{
            gremio++;
        }

        if(res==2){
            break;
        }
    }

        printf("%d grenais\n", grenais);
        printf("Inter:%d\n", inter);
        printf("Gremio:%d\n", gremio);
        printf("Empates:%d\n", empates);

        if(inter > gremio){
            printf("Inter venceu mais\n");
        }
        else if(inter < gremio){
            printf("Gremio venceu mais\n");
        }
        else if(inter == gremio){
            printf("Não houve vencedor\n");
        }

    return 0;
}
