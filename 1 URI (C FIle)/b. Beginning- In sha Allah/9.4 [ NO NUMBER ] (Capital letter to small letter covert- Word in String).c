#include <stdio.h>

int main()
{
    char flower[] = {'K', 'R', 'I', 'S', 'H', 'N', 'O', 'C', 'h', 'U', 'R', 'a', '\0'};

    int length = 12;
    int i;

    printf("Given Letter : %s\n\n", flower);

    for( i=0 ; i < length ; i++ ) {
        if(flower[i] >= 65 && flower[i] <= 90) {
            flower[i] = 'a' + ( flower[i] - 'A' );
        }
    }

    printf("small letter : %s\n", flower);

    return 0;
}
