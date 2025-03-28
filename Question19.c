// average of three num using from user input:-

#include <stdio.h>
void main()
{
    int num1, num2, num3;
    printf("Enter a number for num1: ");
    scanf("%d", &num1);
    printf("Enter a number for num2: ");
    scanf("%d", &num2);
    printf("Enter a number for num3: ");
    scanf("%d", &num3);

    float avg = (num1 + num2 + num3) / 3;
    printf("Average of %d, %d and %d is : %f", num1, num2, num3, avg);
}