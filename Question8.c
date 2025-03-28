// find area of square from input to user :-

#include <stdio.h>
void main()
{
    int side;

    printf("Enter side of square: ");
    scanf("%d", &side);

    int areaOfsquare = (side * side);
    printf("Area of square is %d", areaOfsquare);
}