#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, compoundInterest;

 
    printf("Enter the principal amount: ");
    scanf("%lf", &principal);

    printf("Enter the annual interest rate (in percentage): ");
    scanf("%lf", &rate);

    printf("Enter the time period (in years): ");
    scanf("%lf", &time);

  
    compoundInterest = principal * pow((1 + rate / 100), time) - principal;

  
    printf("The compound interest is: %.2lf\n", compoundInterest);

    return 0;
}