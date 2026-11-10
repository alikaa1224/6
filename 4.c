//27
#include <stdio.h>

int main(void) {
    double income;
    double tax = 0.0;
    double t1 = 0.0, t2 = 0.0, t3 = 0.0;

    if (scanf("%lf", &income) != 1 || income < 0) {
        return 1;
    }

    if (income <= 500.0) {
        t1 = income * 0.10;
    } else if (income <= 1000.0) {
        t1 = 500.0 * 0.10;
        t2 = (income - 500.0) * 0.15;
    } else {
        t1 = 500.0 * 0.10;
        t2 = 500.0 * 0.15;
        t3 = (income - 1000.0) * 0.20;
    }

    tax = t1 + t2 + t3;

    printf("%.2f\n", income);
    printf("%.2f %.2f %.2f\n", t1, t2, t3);
    printf("%.2f\n", tax);

    return 0;
}
