#include<stdio.h>

int main(){

    int t, i, n, m;
    char name1[100], choice1[10], name2[100], choice2[10];

    scanf("%d", &t);

    for( i=0 ; i<t ; i++ ){

        scanf("%s", name1);
        scanf("%s", choice1);

        scanf("%s", name2);
        scanf("%s", choice2);

        scanf("%d %d", &n, &m);

        if((n+m)%2==0){

            if(choice1[0] == 'P') printf("%s\n", name1);
            else if(choice2[0] == 'P') printf("%s\n", name2);

        }

        else{

            if(choice1[0] == 'I') printf("%s\n", name1);
            else if(choice2[0] == 'I') printf("%s\n", name2);

        }

    }

    return 0;

}
