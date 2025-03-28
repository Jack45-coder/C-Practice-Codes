//  write a c program to declare two variable of type float and find their product:

#include <stdio.h>
int main()
{
    float num1, num2;
    printf("Enter the first number: ");
    scanf("%f", &num1);
    printf("Enter the second number: ");
    scanf("%f", &num2);

    float product = num1 * num2;
    printf("The product of %.2f and %.2f is %.2f\n", num1, num2, product);
    return 0;
}