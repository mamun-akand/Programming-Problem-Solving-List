#include <stdio.h>

int main()
{
    char ch = 'f';

    if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') {
        printf("%c character is vowel\n", ch);
    }
    else {
        printf ("%c character is consonant\n", ch);
    }

    return 0;
}
