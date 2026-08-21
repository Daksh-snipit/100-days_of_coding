#include <stdio.h>

int main() {
    float p, r, t;
    float si, ci, amount;

    printf("Enter Principal, Rate and Time: ");
    scanf("%f %f %f", &p, &r, &t);

    // Simple Interest
    si = (p * r * t) / 100;

    // Compound Interest
    amount = p;

    for (int i = 1; i <= t; i++) {
        amount = amount + (amount * r / 100);
    }

    ci = amount - p;

    printf("Simple Interest=%.0f\n", si);
    printf("Compound Interest=%.2f\n", ci);

    return 0;
}