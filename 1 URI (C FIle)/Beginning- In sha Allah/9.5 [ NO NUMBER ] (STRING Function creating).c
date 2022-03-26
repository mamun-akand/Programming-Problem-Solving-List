#include <stdio.h>

int string_length(char str[])
{
    int length = 0;
    int i;

    for(i=0 ; str[i] != '\0' ; i++) {
        length++;
    }

    return length;
}

int main()
{
    char flower[] = {'K', 'R', 'I', 'S', 'H', 'N', 'O', 'C', 'h', 'U', 'R', 'a', '\0'};

    int i;
    int length;

    printf("Given Letter : %s\n\n", flower);

    length = string_length(flower);
    printf("Element number : %d\n", length);


    for( i=0 ; i < length ; i++ ) {
        if(flower[i] >= 65 && flower[i] <= 90) {
            flower[i] = 'a' + ( flower[i] - 'A' );
        }
    }

    printf("small letter : %s\n", flower);

    return 0;
}
