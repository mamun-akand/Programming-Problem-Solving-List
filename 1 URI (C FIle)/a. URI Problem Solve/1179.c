#include <stdio.h>

int main(){

    int ev[5], od[5], t=15, n,  i=0, j, k=0, l, m, p;

    while(t){
        scanf("%d", &n);
        if(n%2==0){
            ev[i] = n;
            if(i==4){
                for(j=0 ; j<=4 ; j++){
                    printf("par[%d] = %d\n", j, ev[j]);
                }
                i=-1;
            }
            i++;
        }
        else{
            od[k] = n;
            if(k==4){
                for(l=0 ; l<=4 ; l++){
                    printf("impar[%d] = %d\n", l, od[l]);
                }
                k=-1;
            }
            k++;
        }
        if(t==1){
            for(m=0 ; m<k ; m++){
                printf("impar[%d] = %d\n", m, od[m]);
            }
            for(p=0 ; p<i ; p++){
                printf("par[%d] = %d\n", p, ev[p]);
            }
        }
        t--;
    }
    return 0;
}
