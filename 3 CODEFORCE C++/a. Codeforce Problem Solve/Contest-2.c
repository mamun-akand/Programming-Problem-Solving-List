#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    while(t){

        int i, j;

        int n;
        scanf("%d", &n);

        int ara[n];

        for(i=0; i<n ; i++){
            scanf("%d", &ara[i]);
        }

        int k=0, total = 0, l=0;

        for(i=0; i<n ; i++){
            if(ara[i]==101) continue;
            for(j=0 ; j<n ; j++){
                if(ara[j]==101) continue;
                else if (ara[j]==0){
                    l=1;
                    ara[j] = 101;
                }
                else if(ara[i]==ara[j]){
                    k++;
                    ara[j] = 101;
                }
            }

            if(k==1) total++;
            else if(k==2) total+=2;
            else if(k%n==0)
            k=0;
            ara[i] = 101;
        }

        printf("%d\n", total+l);

        t--;

    }

    return 0;

}
