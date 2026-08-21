#include <stdio.h>
int main()
{
    float radius,area,circumference;
    printf("enter the radius of the circle");
    scanf("%f",&radius);
    area=3.14*radius*radius;
    circumference=2*3.14*radius;
    printf("area of the circle is %.2f\n",area);
    printf("Circumference of the cirlce is %.2f\n",circumference);
    return 0;


}