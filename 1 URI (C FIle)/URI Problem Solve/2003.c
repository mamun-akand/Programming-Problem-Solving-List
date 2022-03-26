#include<stdio.h>

int main(){

    int a, b;
    char colon;

    while(scanf("%d", &a) != EOF){

        scanf("%c %d", &colon, &b);

        int wake_up = (a*60)+b;

        if(wake_up <= (7*60)) printf("0\n");
        else{
            int delay = ((wake_up+60) - 480);
            printf("Atraso maximo: %d\n", delay);
        }

    }

    return 0;

}
