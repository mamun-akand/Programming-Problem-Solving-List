#include <stdio.h>

int main(){

    double salary, salary2, earned;
    int percentage;
    scanf("%lf", &salary);

    if(salary >= 0 && salary <= 400){

        salary2 = salary + (salary*0.15);
        earned = salary2 - salary;
        percentage = 15;

    }

    else if(salary >= 400.01 && salary <= 800){

        salary2 = salary + (salary*0.12);
        earned = salary2 - salary;
        percentage = 12;

    }

    else if(salary >= 800.01 && salary <= 1200){

        salary2 = salary + (salary*0.10);
        earned = salary2 - salary;
        percentage = 10;

    }

    else if(salary >= 1200.01 && salary <= 2000){

        salary2 = salary + (salary*0.07);
        earned = salary2 - salary;
        percentage = 7;

    }

    else if(salary > 2000){

        salary2 = salary + (salary*0.04);
        earned = salary2 - salary;
        percentage = 4;
    }

    printf("Novo salario: %.2lf\nReajuste ganho: %.2lf\n", salary2, earned);
    printf("Em percentual: %d %%\n", percentage);

    return 0;
}
