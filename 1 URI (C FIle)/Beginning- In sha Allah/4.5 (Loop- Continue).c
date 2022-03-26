#include <stdio.h>

int main()
{
    int n = 0;

    while(n <= 10) {
        n=n+1;

        if(n % 2 == 1) {
            continue;   /*Basically continue term er kaaj holo: condition ta mille seta ignore kore abar loop
                         e fire jay. So seta ar print loop e jaay na. Then first theke abar checking shuru kore.*/
        }
        printf("%d\n", n);
    }
    return 0;
}
