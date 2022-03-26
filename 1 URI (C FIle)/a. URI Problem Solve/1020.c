#include <stdio.h>

int main(){

    int days, year, rem_days, month, day;
    scanf("%d", &days);

    year = days/365;
    rem_days = days%365;

    month = rem_days/30;
    day = rem_days%30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", year, month, day);

    return 0;

}
