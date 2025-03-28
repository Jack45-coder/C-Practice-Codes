#include<stdio.h>
int main(){
int a,b;
char alpha;
printf("Enter the Character: ");
scanf("%c",&alpha);
switch (alpha)
{
case '+':
    printf("Addition: (a + b)\n");
    printf("Enter inputs in a: ");
    scanf("%d",&a);
    printf("Enter inputs in b: ");
    scanf(" %d",&b);
    printf("Addition = %d",a+b);
    break;

case '-':
    printf("Subtract: (a - b)");
    printf("Enter inputs in a: ");
    scanf("%d",&a);
    printf("Enter inputs in b: ");
    scanf(" %d",&b);
    printf("Subtraction = %d",a-b);
    break;

case '*':
    printf("multiplication: (a * b)");
    printf("Enter inputs in a: ");
    scanf("%d",&a);
    printf("Enter inputs in b: ");
    scanf(" %d",&b);
    printf("Multiplication %d",a*b);
    break;

case '/':
    printf("Division: (a / b)");
    printf("Enter inputs in a: ");
    scanf("%d",&a);
    printf("Enter inputs in b: ");
    scanf(" %d",&b);
    printf("Division = %d",a/b);
    break;

default:
   printf("Pla inputs valid inputs");
    break;
}







    return 0;
}