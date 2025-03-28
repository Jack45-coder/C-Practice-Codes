// Modulus of two number from user:-

#include <stdio.h>
void main()
{
    int num1, num2;

    printf("Enter the first num: ");
    scanf("%d", &num1);
    printf("Enter the second num: ");
    scanf("%d", &num2);

    int mod = num1 % num2;
    printf("Modulus of num1 and num2 is:  %d", mod);
}