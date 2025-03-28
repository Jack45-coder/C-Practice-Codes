// Find circumference of circle to take a input from user:- 

#include<stdio.h>
void main(){

int radius;

    printf("Enter radius of circle: ");
    scanf("%d", &radius);

    float circumferenceOfcircle = (3.14 * 2 * radius);
    printf("Area of circle is: %.2f", circumferenceOfcircle);

}