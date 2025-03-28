// Write a program to find the largest of two numbers using the conditional operator:-

#include<stdio.h>
int main(){
int num1;
printf("Enter a First number: ");
scanf("%d",&num1);

int num2;
printf("Enter a second number: ");
scanf("%d",&num2);

if (num1>num2)
{
    printf("%d is largest",num1);
}
else
{
    printf("%d is largest",num2);
}

    return 0;
}