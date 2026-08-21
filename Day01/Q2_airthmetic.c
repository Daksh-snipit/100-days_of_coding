#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("Sum=%d, Diff=%d, Product=%d", a + b, a - b, a * b);

    if (b != 0) {
        printf(", Quotient=%d", a / b);
    } else {
        printf(", Quotient=Cannot divide by zero");
    }

    return 0;
}