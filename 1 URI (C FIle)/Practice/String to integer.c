#include<stdio.h>
#include<stdlib.h>

int main(){

    char ara1[10000];
    scanf("%s", ara1);


    long long int num;

    //num = atoi(ara);
    sscanf(ara1, "%d", &num);

    printf("The number is : %lld\n", num/5);

    return 0;

}
