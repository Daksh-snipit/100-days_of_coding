#include <stdio.h>

int main() {
    int n, first, last, digits = 0, power = 1, middle, result;

    printf("Enter a number: ");
    scanf("%d", &n);

    last = n % 10;

    
    int temp = n;
    while (temp >= 10) {
        temp /= 10;
        digits++;
        power *= 10;
    }

    first = temp;

    
    middle = (n % power) / 10;

    
    result = last * power + middle * 10 + first;

    printf("%d\n", result);

    return 0;
}