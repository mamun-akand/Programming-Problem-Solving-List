#include <stdio.h>

int main()
{
    char ch='d';

    if(ch=='a') {
        printf("%c is a small letter", ch);
    }
    else if(ch=='A') {
        printf("%c is a Capital Letter", ch);
    }
    else if(ch=='b') {
        printf("%c is a small letter", ch);
    }
    else if(ch=='B') {
        printf("%c is a Capital Letter", ch);
    }
    else if(ch=='c') {
        printf("%c is a small letter", ch);
    }
    else if(ch=='C') {
        printf("%c is a Capital Letter", ch); /*This comparison with leter will be continued till a-z & A-Z.*/
    }

    return 0;
}
