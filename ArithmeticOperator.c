// Write a program to perform addition, subtractiom, multiplication and division using arithmetic operator:#include <stdio.h>

#include<stdio.h>
int main()
{    
    int num1;
    printf("Enter a first number: ");
    scanf("%d", &num1);

    int num2;
    printf("Enter a first number: ");
    scanf("%d", &num2);

    int sum = num1 + num2;
    int sub = num1 - num2;
    int multi = num1 * num2;
    int div = num1 / num2;

    printf("sum = %d, sub = %d, multi = %d, div = %d",sum,sub,multi,div);

    return 0;

}