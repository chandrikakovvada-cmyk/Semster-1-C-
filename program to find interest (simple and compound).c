#include <stdio.h>
#include <math.h>

int main() {
    double principal, rate, time, si, ci;

    printf("Enter principal amount: ");
    scanf("%lf", &principal);

    printf("Enter annual interest rate (in %%): ");
    scanf("%lf", &rate);

    printf("Enter time in years: ");
    scanf("%lf", &time);

    si = (principal * rate * time) / 100.0;
    ci = principal * pow((1 + rate / 100.0), time) - principal;

    printf("Simple Interest = %.2lf\n", si);
    printf("Compound Interest = %.2lf\n", ci);

    return 0;
}

