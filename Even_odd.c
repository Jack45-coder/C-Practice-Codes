// Write a c program to deaclare a variable type int and check weither it is even or odd:

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("%d is a Even num", num);
    }
    else
    {
        printf("%d is a Odd number", num);
    }

    return 0;
}