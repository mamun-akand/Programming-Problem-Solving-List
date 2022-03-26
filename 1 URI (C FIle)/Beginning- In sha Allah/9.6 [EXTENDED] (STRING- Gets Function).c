#include <stdio.h>

int string_length(char str[])
{
    int i;
    int length=0;

    for(i=0 ; str[i] != '\0' ; i++) {       /* for(i=0 ; str[i] != '\0' ; i++); only eta diye
                                            return i; dileo same kaaj korbe. that means length baad diyei kora jabe.*/
        length++;
    }

    return length;
}

int main()
{
    char ara[100];
    int length;

    while(NULL != gets(ara)) {
        printf("%s\n", ara);

        length = string_length(ara);
        printf("%d", length);
    }

    return 0;
}
