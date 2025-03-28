#include <stdio.h>
void main()
{
    int num1, num2;
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);
    if (num1 > num2)
    {
        printf("%d is the maximun number and %d is the minimun number.\n ", num1, num2);
    }
    else if (num1 < num2)
    {
        printf("%d is the maximun number and %d is the minimun number.\n ", num2, num1);
    }
    else
    {
        printf("Both number are equal.\n");
    }
}