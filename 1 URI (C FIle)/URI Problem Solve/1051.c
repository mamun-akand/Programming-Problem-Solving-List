#include <stdio.h>

int main(){

    double sal, tax;
    scanf("%lf", &sal);

    if(sal > 0 && sal < 2000.00){
        printf("Isento\n");
    }

    else{

        if(sal >= 2000.01 && sal <= 3000.00) {
            sal = sal - 2000;
            tax = sal * 0.08;
            printf("R$ %.2lf\n", tax);
        }

        else if(sal >= 3000.01 && sal <= 4500.00) {
            sal = sal - 2000;
            tax = (sal-1000)*0.18 + (1000*0.08);
            printf("R$ %.2lf\n", tax);
        }

        else if(sal > 4500.00) {
            sal = sal - 2000;
            tax = (sal-2500)*.28 + (1500*0.18) + (1000*0.08);
            printf("R$ %.2lf\n", tax);
        }


    }

    return 0;
}
