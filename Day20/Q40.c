#include <stdio.h>

int main() {
    char binary[100];

    printf("Enter a binary number: ");
    scanf("%s", binary);

    for (int i = 0; binary[i] != '\0'; i++) {
        if (binary[i] == '0')
            printf("1");
        else
            printf("0");
    }

    printf("\n");

    return 0;
}