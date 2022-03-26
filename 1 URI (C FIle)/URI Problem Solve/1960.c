#include<stdio.h>

int main(){

    int n, q;
    scanf("%d", &n);

    q = n/100;

    if( q>0 ){

        if(q==9) printf("CM");
        else if(q==8) printf("DCCC");
        else if(q==7) printf("DCC");
        else if(q==6) printf("DC");
        else if(q==5) printf("D");
        else if(q==4) printf("CD");
        else if(q==3) printf("CCC");
        else if(q==2) printf("CC");
        else if(q==1) printf("C");

        n = n%100;
    }

    q = n/10;

    if( q>0 ){

        if(q==9) printf("XC");
        else if(q==8) printf("LXXX");
        else if(q==7) printf("LXX");
        else if(q==6) printf("LX");
        else if(q==5) printf("L");
        else if(q==4) printf("XL");
        else if(q==3) printf("XXX");
        else if(q==2) printf("XX");
        else if(q==1) printf("X");

        n = n%10;
    }

    q = n;

    if(n > 0){

        if(q==9) printf("IX");
        else if(q==8) printf("VIII");
        else if(q==7) printf("VII");
        else if(q==6) printf("VI");
        else if(q==5) printf("V");
        else if(q==4) printf("IV");
        else if(q==3) printf("III");
        else if(q==2) printf("II");
        else if(q==1) printf("I");

    }

    printf("\n");

    return 0;

}
