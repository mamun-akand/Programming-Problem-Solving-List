#include<stdio.h>

int main(){

    int n, i;
    scanf("%d", &n);

    int ara[n];
    for(i=0 ; i<n ; i++){
        scanf("%d", &ara[i]);
    }

    int hcf, l, s;

    for(i=0 ; i<n ; i++){
        if(i==0){
            if(ara[i]>ara[i+1]){
                l = ara[i];
                s = ara[i+1];
            }
            else{
                l = ara[i+1];
                s = ara[i];
            }

            int j;
            for(j=s ; j>0 ; j--){
                if(l%j==0 && s%j==0){
                    hcf = j;
                    break;
                }
            }
        }
        else if(i==1) continue;
        else{
            if(hcf>ara[i]){
                l = hcf;
                s = ara[i];
            }
            else{
                l = ara[i];
                s = hcf;
            }

            int j;
            for(j=s ; j>0 ; j--){
                if(l%j==0 && s%j==0){
                    hcf = j;
                    break;
                }
            }
        }
    }

    printf("The HCF of given numbers is %d", hcf);

    return 0;

}
