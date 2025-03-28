// write a C program to take three number from user and find largest number :-
#include <stdio.h>
int main()
{
    float num1, num2, num3;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &num1, &num2,&num3);

    if (num1 >= num2 && num1 >= num3)
    {
        printf("The largest number is %.2f", num1);
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        printf("The largest number is %.2f", num2);
    }
    else
    {
        printf("The largest number is %.2f", num3);
    }

    return 0;
}