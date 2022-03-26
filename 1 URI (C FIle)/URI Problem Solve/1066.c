#include <stdio.h>

int main() {

    int ev=0, od=0, pos=0, neg=0;
    int a, b, c, d, e;

    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

        if(a%2==0){
            ev=ev+1;
        }
        else{
            od=od+1;
        }

        if(b%2==0){
            ev=ev+1;
        }
        else{
            od=od+1;
        }

        if(c%2==0){
            ev=ev+1;
        }
        else{
            od=od+1;
        }

        if(d%2==0){
            ev=ev+1;
        }
        else{
            od=od+1;
        }

        if(e%2==0){
            ev=ev+1;
        }
        else{
            od=od+1;
        }

        printf("%d valor(es) par(es)\n", ev);
        printf("%d valor(es) impar(es)\n", od);


        if(a>0 && a != 0){
            pos=pos+1;
        }
        else if(a<0 && a != 0){
            neg=neg+1;
        }

        if(b>0 && b != 0 ){
            pos=pos+1;
        }
        else if (b<0 && b != 0){
            neg=neg+1;
        }

        if(c>0 && c != 0){
            pos=pos+1;
        }
        else if (c<0 && c != 0){
            neg=neg+1;
        }

        if(d>0 && d != 0){
            pos=pos+1;
        }
        else if (d<0 && d != 0){
            neg=neg+1;
        }

        if(e>0 && e != 0){
            pos=pos+1;
        }
        else if (e<0 && e != 0){
            neg=neg+1;
        }

        printf("%d valor(es) positivo(s)\n", pos);
        printf("%d valor(es) negativo(s)\n", neg);

    return 0;

}
