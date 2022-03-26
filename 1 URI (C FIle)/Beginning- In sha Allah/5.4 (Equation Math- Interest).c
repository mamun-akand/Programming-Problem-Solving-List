#include <stdio.h>

int main()
{
    double loan_amount, interest_rate, years, total_amount, monthly_payment;

    printf("Enter loan amount : ");
    scanf("%lf", &loan_amount);

    printf("Enter interest rate : ");
    scanf("%lf", &interest_rate);

    printf("Enter Number of years : ");
    scanf("%lf", &years);

    total_amount = loan_amount + loan_amount*interest_rate*years / 100.00;
    monthly_payment = total_amount / (years*12);

    printf("Total payable amount : %0.2lf\n", total_amount);
    printf("Monthly payable amount : %0.2lf\n", monthly_payment);

    return 0;
}
