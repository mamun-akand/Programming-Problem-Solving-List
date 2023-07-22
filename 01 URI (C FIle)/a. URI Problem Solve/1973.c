#include<stdio.h>

    long long int n, sum_sheep=0, sum_trak=0, i;
    long long int sheep[1000000], sign[1000000];

int main(){

    scanf("%lld", &n);

    for(i=0 ; i<n ; i++){
        scanf("%lld", &sheep[i]);
        sign[i] = 0;
    }

    i=0;

    while(1){

        if(i==0 && sheep[i]%2==0){
            sign[i] = 1;
            if(sheep[i]>0)
                sheep[i]--;
            break;
        }
        else if(i==(n-1) && sheep[i]%2==1){
            sign[i]=1;
            if(sheep[i]>0)
                sheep[i]--;
            break;
        }
        else if(sheep[i]%2==1){
            sign[i]=1;
            if(sheep[i]>0)
                sheep[i]--;
            i++;
        }
        else if(sheep[i]%2==0){
            sign[i]=1;
            if(sheep[i]>0)
                sheep[i]--;
            i--;
        }

    }

    for(i=0 ; i<n ; i++){
        sum_sheep += sheep[i];
        sum_trak += sign[i];
    }

    printf("%lld %lld\n", sum_trak, sum_sheep);

    return 0;

}
