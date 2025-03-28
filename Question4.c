#include <stdio.h>
int main()
{
    double num1, num2;
    printf("Enter the first number: ");
    scanf("%lf", &num1);
    printf("Enter the second number: ");
    scanf("%lf", &num2);

    double div = num1 / num2;
    printf("Division of num1 and num2 is %.2lf", div);
    return 0;
}
