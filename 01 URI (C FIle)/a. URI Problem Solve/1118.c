#include <stdio.h>

int main(){

    double x, y, media;
    int n=1, i, z;

        while(n){

            for(i=0 ; ; i++){

                scanf("%lf", &x);
                if(x < 0.0 || x > 10.0)
                    printf("nota invalida\n");
                else
                    break;

            }

            for(i=0; ; i++){

                scanf("%lf", &y);
                if(y < 0.0 || y > 10.0)
                    printf("nota invalida\n");
                else
                    break;

            }

            printf("media = %0.2lf\n", media = ((x+y)/2));
            printf("novo calculo (1-sim 2-nao)\n");

            for(i=0 ; ; i++){

                scanf("%d", &z);

                if(z == 1){
                    n = 1;
                    break;
                }

                else if(z == 2){
                    n=2;
                    break;
                }

                else printf("novo calculo (1-sim 2-nao)\n");

            }

            if(n==2) break;

        }

    return 0;
}
