#include<stdio.h>

int main(){

    int n, t=0;
    char shel[7], raj[7];

    while(n){

        scanf("%d", &n);
        scanf("%s %s", shel, raj);

        t++;

        if(shel[2] == raj[2]) printf("Caso #%d: De novo!\n", t);

        else if(shel[2] == 's' && raj[2] == 'p') printf("Caso #%d: Bazinga!\n", t);
        else if(shel[2] == 'p' && raj[2] == 's') printf("Caso #%d: Raj trapaceou!\n", t);

        else if(shel[2] == 'p' && raj[2] == 'd') printf("Caso #%d: Bazinga!\n", t);
        else if(shel[2] == 'd' && raj[2] == 'p') printf("Caso #%d: Raj trapaceou!\n", t);

        else if(shel[2] == 'd' && raj[2] == 'g') printf("Caso #%d: Bazinga!\n", t);
        else if(shel[2] == 'g' && raj[2] == 'd') printf("Caso #%d: Raj trapaceou!\n", t);

        else if(shel[2] == 'g' && raj[2] == 'o') printf("Caso #%d: Bazinga!\n", t);
        else if(shel[2] == 'o' && raj[2] == 'g') printf("Caso #%d: Raj trapaceou!\n", t);

        else if(shel[2] == 'o' && raj[2] == 's') printf("Caso #%d: Bazinga!\n", t);
        else if(shel[2] == 's' && raj[2] == 'o') printf("Caso #%d: Raj trapaceou!\n", t);

        else if(shel[2] == 's' && raj[2] == 'g') printf("Caso #%d: Bazinga!\n", t);
        else if(shel[2] == 'g' && raj[2] == 's') printf("Caso #%d: Raj trapaceou!\n", t);

        else if(shel[2] == 'g' && raj[2] == 'p') printf("Caso #%d: Bazinga!\n", t);
        else if(shel[2] == 'p' && raj[2] == 'g') printf("Caso #%d: Raj trapaceou!\n", t);

        else if(shel[2] == 'p' && raj[2] == 'o') printf("Caso #%d: Bazinga!\n", t);
        else if(shel[2] == 'o' && raj[2] == 'p') printf("Caso #%d: Raj trapaceou!\n", t);

        else if(shel[2] == 'o' && raj[2] == 'd') printf("Caso #%d: Bazinga!\n", t);
        else if(shel[2] == 'd' && raj[2] == 'o') printf("Caso #%d: Raj trapaceou!\n", t);

        else if(shel[2] == 'd' && raj[2] == 's') printf("Caso #%d: Bazinga!\n", t);
        else if(shel[2] == 's' && raj[2] == 'd') printf("Caso #%d: Raj trapaceou!\n", t);

        n--;

    }

    return 0;

}
