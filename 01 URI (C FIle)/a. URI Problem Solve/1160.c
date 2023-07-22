#include <stdio.h>

int main(){

    int t, pa, pb, i;
    double g1, g2;

    scanf("%d", &t);

    while(t){

        scanf("%d %d %lf %lf", &pa, &pb, &g1, &g2);
        pa = (double) pa;
        pb = (double) pb;

        for(i=1 ; ; i++){
            pa = pa + (pa*(g1/100.0));
            pb = pb + (pb*(g2/100.0));

            if(i>100){
                printf("Mais de 1 seculo.\n");
                break;
            }
            else if(pa>pb && i<=100){
                printf("%d anos.\n", i);
                break;
            }
        }
        t--;
    }

    return 0;
}
