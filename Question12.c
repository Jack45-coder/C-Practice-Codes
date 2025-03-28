// find area of circle take input from user:-

#include <stdio.h>
void main()
{
    int radius;

    printf("Enter radius of circle: ");
    scanf("%d", &radius);

    float areaOfcircle = (3.14 * radius * radius);
    printf("Area of circle is: %.2f", areaOfcircle);
}