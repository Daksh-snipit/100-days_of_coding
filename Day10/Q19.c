#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value of a,b,c");
    scanf("%d %d %d", &a, &b, &c);
    if (a == b && b == c)
    {
        printf("Equilateral\n");
    }
    else if (a == b || b == c || a == c)
    {
        printf("Isosceles\n");
    }
    else
    {
        printf("Scalene\n");
    }
    return 0;
}