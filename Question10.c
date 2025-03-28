// Find perimeter of rectangle take input from user:-

#include<stdio.h>
void main(){
int length,width;

printf("Enter length of rectangle: ");
scanf("%d",&length);
printf("Enter width of rectangle: ");
scanf("%d",&width);

int perimeterOfrectangle = 2*(length+width);
printf("Perimeter of rectangle is %d",perimeterOfrectangle);


}