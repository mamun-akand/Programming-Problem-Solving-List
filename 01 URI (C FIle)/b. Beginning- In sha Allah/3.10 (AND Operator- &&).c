#include <stdio.h>

int main()
{
    char ch='b';

    if(ch >= 'a' && ch <= 'z') {
        printf("%c letter is lower case\n", ch);
    }
    else if(ch >= 'A' && ch <= 'Z') {
        printf ("%c letter is UPPER CASE\n", ch);
    }

    return 0;
}
