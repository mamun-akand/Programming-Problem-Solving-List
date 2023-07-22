#include <stdio.h>

int main(){

    int x;
    int a = 0, g = 0, d = 0;

    while(1){
        scanf("%d", &x);

        if(x <= 0 || x > 4){
            continue;
        }
        else if(x == 4 && x > 0 && x <5){
            break;
        }

        else if(x == 1 && x > 0 && x <5){
            a++;
        }

        else if(x == 2 && x > 0 && x <5){
            g++;
        }

        else if(x == 3 && x > 0 && x <5){
            d++;
        }
    }

    printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n", a, g, d);

    return 0;
}
