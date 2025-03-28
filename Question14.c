// find area of triangle to take a input from user:-

#include <stdio.h>
void main()
{

    int base, height;
    printf("Enter base of tringle: ");
    scanf("%d", &base);
    printf("Enter height of tringle: ");
    scanf("%d", &height);

    float areaOftringle = 0.5*base * height;
    printf("Area of tringle is: %.2f", areaOftringle);
}