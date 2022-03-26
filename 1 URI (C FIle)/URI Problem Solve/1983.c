#include<stdio.h>

int main(){

    int s, reg, i, h_reg = -1;
    double note, h_note = -1;
    scanf("%d", &s);

    for(i=1 ; i<=s ; i++){
        scanf("%d %lf", &reg, &note);
        if(note > h_note){
            h_reg = reg;
            h_note = note;
        }
    }

    if(h_note >= 8.0) printf("%d\n", h_reg);
    else printf("Minimum note not reached\n");

    return 0;

}
