#include <stdio.h>

double calculatePower(double base, int exponent) {
    double result = 1.0;
    for (int i = 1; i <= exponent; i++) {
        result *= base;
    }
    return result;
}

double calculateAmount(double principal, double interestRate, int timePeriod) {
    double factor = 1.0 + interestRate; 
    double powerTerm = calculatePower(factor, timePeriod);
    return principal * factor * ((powerTerm - 1) / interestRate);
}

int main() {
    int time;
    double principal, interest, finalAmount;

    scanf("%d", &time);
    scanf("%lf", &principal);
    scanf("%lf", &interest);

    for (int period = 1; period <= time; period++) {
        finalAmount = calculateAmount(principal, interest, period);
        printf("Amount at the end of month %d: R$ %.2lf\n", period, finalAmount);
    }

    return 0;
}
