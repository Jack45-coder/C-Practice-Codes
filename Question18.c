//  find area and perimeter of square to take a input from user:-

#include<stdio.h>
void main()
{
int side;
printf("Enter square of side: ");
scanf("%d",&side);

int area = side*side;
int perimeter = 4*side;
printf("%d is area of square\n%d is perimeter of square",area,perimeter);



}