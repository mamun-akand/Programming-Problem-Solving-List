#include <stdio.h>

int main()
{
    char country[] = {'B', 'a', 'n', 'g', 'l', 'a', 'd', 'e', 's', 'h'};

    int length = 10;
    int i;

    for(i=0 ; i<length ; i++) {
        if(country[i] >= 97 && country[i] <= 122) {
            country[i] = 'A' + (country[i]-'a');
        }
    }

    printf("%s", country);

    return 0;
}
